#include "s21_smartcalc.h"

// int main() {
//   // char *str =
//   // "sqrt(4)+9.235+2^3^sin(cos(10))-564-sqrt(25)+28.6*35mod99^2^3";
//   // char *str = "1+2+3+(3+5)*2+3/(1-4)^3*(3^((2+1)+1))/(((1)))+2";
//   char str[255] =
//       "-5+(-1+2)*4*cos(+2*7.5-2)+sin(cos(2*5))-sqrt(2^log(5-1))+ln(55/"
//       "(2+7))+asin(0.5)+tan(50)";
//   // char str[] = "22222222222222222+0";
//   // создаем указатели для "очереди"
//   // Node *front = NULL, *rear = NULL;
//   // parser_str_to_que(&rear, &front, str);
//   double result;
//   int error;
//   error = start(str, &result);
//   // INFINITY
//   printf("EXPRESSION= %s\n", str);
//   printf("RESULT= %lf\n", result);
//   printf("STATUS= %s\n", error ? "SUCCESS" : "FAILURE");

//   return 0;
// }

/*__________________GENERAL_WORK_FUNCTIONS__________________*/
int start(char* str, double* result) {
  int error = SUCCESS;
  Node *front = NULL, *rear = NULL;
  error = validation(str);
  if (error == SUCCESS) {
    error = parserStrToQue(&rear, &front, str);
    if (error == SUCCESS) {
      error = resolution(&rear, &front, result);
    }
  }
  return error;
}

Node* newNode(double value) {
  Node* tmp;
  tmp = (Node*)malloc(sizeof(Node));
  if (tmp) {
    tmp->value = value;
    tmp->next = NULL;
  }
  return tmp;
}

double peek(Node* src) { return src->value; }

int isEmpty(Node* src) { return src == NULL; }

int validation(char* str) {
  int error = SUCCESS;
  int bracketOpen = 0, bracketClose = 0;
  if (strlen(str) > 255 || !(*str)) error = FAILURE;
  for (size_t i = 0; str[i] != '\0' && error; i++) {
    char prev = 0;
    char next = str[i + 1];
    char check[] = "+-*/^m";
    if (i != 0) prev = str[i - 1];
    if (strspn(&str[i], check) && strspn(&prev, check)) error = FAILURE;
    if (str[i] == '(') {
      bracketOpen++;
    }
    if (str[i] == ')') {
      bracketClose++;
    }
    if (bracketOpen < bracketClose) error = FAILURE;
    if (i == (strlen(str) - 1) && bracketOpen != bracketClose) {
      error = FAILURE;
    }
    if ((prev == '(' &&
         (str[i] == '*' || str[i] == '/' || str[i] == '^' || str[i] == 'm')) ||
        (str[0] == '*' || str[0] == '/' || str[0] == '^' || str[0] == 'm' ||
         str[0] == '.') ||
        (!isdigit(str[strlen(str) - 1]) && str[strlen(str) - 1] != ')')) {
      error = FAILURE;
    }
    if (str[i] == '.' && (!isdigit(prev) || !isdigit(next))) error = FAILURE;
    if (str[i] == '(' && next == ')') error = FAILURE;
  }
  return error;
}

char peekCh(char* string) { return *string; }

int checkNumber(char* str) {
  int countDot = 0;
  char c;
  int err = 0;
  while (*str) {
    c = peekCh(str);
    if (isdigit(c) || ((c == '.'))) {
      if (c == '.') countDot++;

    } else {
      break;
    }
    str++;
  }
  if (countDot > 1) err = 1;
  return err;
}

int parserStrToQue(Node** rear, Node** front, char* str) {
  int numIn = 0, error = SUCCESS;
  while (*str) {
    if (isdigit(peekCh(str))) {
      error = parserDigitFromStrToQue(rear, front, &str);
      numIn++;
      if (error == FAILURE) break;
    } else {
      enqueueOp(rear, front, &str, &numIn);
    }
  }
  return error;
}

int parserDigitFromStrToQue(Node** rear, Node** front, char** str) {
  double d;
  int error = SUCCESS;
  if (!checkNumber(*str)) {
    d = strtod((const char*)*str, str);
    pushEnqueue(rear, front, d);
    (*rear)->priority = NUMBER;
    (*rear)->type = NUMBER;
  } else {
    error = FAILURE;
  }
  return error;
}

/*__________________CALCUCATE_FUNCTIONS__________________*/
int resolution(Node** rear, Node** front, double* result) {
  Node *stack_n = NULL, *stack_op = NULL;
  double d;
  int error = 1;
  int priority = 0;
  while (*front) {
    if ((*front)->type == OPERATOR) {
      priority = (*front)->priority;
      d = popEqueue(rear, front);
      calculateExpression(&stack_n, &stack_op, d, priority);
      d = -1;
    } else {
      d = popEqueue(rear, front);
      pushStack(&stack_n, d);
      stack_n->priority = NUMBER;
      d = -1;
    }
  }
  while (!isEmpty(stack_op)) {
    priority = stack_op->priority;
    calculateExpression(&stack_n, &stack_op, d, priority);
  }
  *result = popStack(&stack_n);
  if (!isfinite(*result)) error = FAILURE;
  while (!isEmpty(stack_n)) {
    popStack(&stack_n);
    error = FAILURE;
  }
  return error;
}

double calculateExpression(Node** stack_n, Node** stack_op, double d,
                           int priority) {
  double result;
  if (isEmpty(*stack_op)) {
    pushStack(stack_op, d);
    (*stack_op)->priority = priority;
  } else if ((int)d == BKT_OP) {
    pushStack(stack_op, d);
    (*stack_op)->priority = priority;
  } else if ((int)d == BKT_CL) {
    while (!((int)peek(*stack_op) == BKT_OP)) {
      if ((*stack_op)->priority == 4) {
        result = calcUnaryStack(stack_op, stack_n);
        pushStack(stack_n, result);
      } else {
        result = calcBinaryStack(stack_op, stack_n);
        pushStack(stack_n, result);
      }
    }
    popStack(stack_op);
  } else {
    if ((int)d == POW && peek(*stack_op) == POW) {
      pushStack(stack_op, d);
    } else {
      while (!isEmpty(*stack_op) && (priority <= (*stack_op)->priority)) {
        if ((*stack_op)->priority == 4) {
          result = calcUnaryStack(stack_op, stack_n);
          pushStack(stack_n, result);
        } else {
          result = calcBinaryStack(stack_op, stack_n);
          pushStack(stack_n, result);
          if (isEmpty(*stack_op)) break;
        }
      }

      if (d != -1) {
        pushStack(stack_op, d);
        (*stack_op)->priority = priority;
      }
    }
  }
  return 0;
}

double calcBinaryStack(Node** stack_op, Node** stack_n) {
  double op = popStack(stack_op);
  double num2 = popStack(stack_n);
  double num1 = (op == U_MINUS || op == U_PLUS) ? 0 : popStack(stack_n);
  return calcBinaryRes(num1, num2, op);
}

double calcBinaryRes(double num1, double num2, int op) {
  double result = 0;
  if (op == PLUS) result = sum(num1, num2);
  if (op == U_PLUS) result = sum(num1, num2);
  if (op == MINUS) result = sub(num1, num2);
  if (op == MULT) result = mul(num1, num2);
  if (op == U_MINUS) result = sub(num1, num2);
  if (op == DIV) result = division(num1, num2);
  if (op == MOD) result = fmod(num1, num2);
  if (op == POW) result = pow(num1, num2);
  return result;
}

double calcUnaryStack(Node** stack_op, Node** stack_n) {
  double op = popStack(stack_op);
  double num = popStack(stack_n);
  return calcUnaryRes(num, op);
}

double calcUnaryRes(double num, int op) {
  double result = 0;
  if (op == SIN) result = sin(num);
  if (op == COS) result = cos(num);
  if (op == TAN) result = tan(num);
  if (op == LOG) result = log10(num);
  if (op == ASIN) result = asin(num);
  if (op == ACOS) result = acos(num);
  if (op == ATAN) result = atan(num);
  if (op == SQRT) result = sqrt(num);
  if (op == LN) result = log(num);
  return result;
}

double sum(double num1, double num2) { return num1 + num2; }
double sub(double num1, double num2) { return num1 - num2; }
double mul(double num1, double num2) { return num1 * num2; }
double division(double num1, double num2) { return num1 / num2; }

/*__________________STEK_WORK_FUNCTIONS__________________*/
void pushStack(Node** plist, double value) {
  Node* tmp = newNode(value);
  if (tmp) {
    tmp->next = *plist;
    *plist = tmp;
  }
}

double popStack(Node** plist) {
  double delete;
  if (*plist) {
    Node* tmp = *plist;
    delete = tmp->value;
    *plist = tmp->next;
    free(tmp);
  }
  return delete;
}

/*__________________ENQUEUE_WORK_FUNCTIONS__________________*/
void pushEnqueue(Node** rear, Node** front, double value) {
  Node* tmp = newNode(value);
  if (*front == NULL) {
    *front = tmp;
    *rear = tmp;
  } else {
    (*rear)->next = tmp;
    *rear = tmp;
  }
}

double popEqueue(Node** rear, Node** front) {
  if (*front == NULL) {
    printf("\n Queue underflow");
    exit(EXIT_FAILURE);
  }
  Node* pDel = *front;
  *front = (*front)->next;
  if (*front == NULL) {
    *rear = NULL;
  }
  double d = pDel->value;
  free(pDel);
  return d;
}

void enqueueOp(Node** rear, Node** front, char** str, int* numIn) {
  char* strF[] = {"sin",  "cos",  "tan", "log", "asin", "acos",
                  "atan", "sqrt", "ln",  "mod", "+",    "-",
                  "*",    "/",    "^",   "(",   ")"};
  int index = -1, unary = 0;
  for (size_t i = 0; i < SIZE_ARRAY; i++) {
    if (strlen(strF[i]) != 1) {
      if (!strncmp(*str, strF[i], 3) || !strncmp(*str, strF[i], 4) ||
          !strncmp(*str, strF[i], 2)) {
        index = (int)i;
        break;
      }
    } else {
      if (!strncmp(*str, strF[i], 1)) {
        if ((peekCh(strF[i]) == '-') || (peekCh(strF[i]) == '+')) {
          if (*numIn == 0 ||
              ((*rear)->value == BKT_OP && (*rear)->priority == 0)) {
            unary = 1;
          }
        }
        index = (int)i;
        break;
      }
    }
  }
  pushEnqueue(rear, front, index);
  char c = peekCh(strF[index]);
  if (c == '(') {
    (*rear)->priority = 0;
  } else if ((c == '+' || c == '-')) {
    if (unary) {
      (*rear)->value = (c == '-') ? U_MINUS : U_PLUS;
    }
    (*rear)->priority = 1;
  } else if (c == '*' || c == '/' || c == 'm') {
    (*rear)->priority = 2;
  } else if (c == '^') {
    (*rear)->priority = 3;
  } else if (c == ')') {
    (*rear)->priority = 5;
  } else {
    (*rear)->priority = 4;
  }
  (*rear)->type = OPERATOR;
  *str += strlen(strF[index]);
  *numIn += strlen(strF[index]);
}

/*___________________PRINT_FUNCTIONS__________________*/

void printStek(Node* src) {
  for (Node* p = src; p != NULL; p = p->next) {
    printf("Value = %lf\n", p->value);
    printf("Adress list= %p\n", p);
    printf("Next = %p\n", p->next);
  }
}

/*
finite Аргументы:
x – проверяемое число с плавающей точкой.
Возвращаемое значение:
0 - если аргумент плюс или минус бесконечность или не число (NAN).
Отличное от нуля значение, если проверяемый аргумент – конечное число.
Описание:
Функции finite, finitef, finitel проверяют, является ли аргумент конечным
числом, то есть проверяют, что аргумент не плюс/минус бесконечность и не
является нечисловым значением (не NAN).
*/
