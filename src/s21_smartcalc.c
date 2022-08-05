#include "s21_smartcalc.h"

int main() {
  // char *str = "9.235+sin(10)-564-28.6*35mod99^2";
  char* str = "1+(-9)";
  // создаем указатели для "очереди"
  Node *front = NULL, *rear = NULL;
  parserStrToQue(&rear, &front, str);
  double res = resolution(&rear, &front);
  printf("EXPRESSION= %s\n", str);
  printf("RESULT= %lf\n", res);

  return 0;
}

/*__________________GENERAL_WORK_FUNCTIONS__________________*/
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

int validation(char src[256]) {
  int error = 0;
  int bracketOpen = 0, bracketClose = 0;
  for (int i = 0; src[i] != '\0' && !error; i++) {
    char prev;
    char next = src[i + 1];
    char check[] = "+-*/^";
    char checkNum[] = "0123456789(";
    if (i != 0) prev = src[i - 1];
    if (src[i] == '(') {
      bracketOpen++;
    }
    if (src[i] == ')') {
      bracketClose++;
    }
    if (bracketOpen < bracketClose) error = 1;
    if (i == (strlen(src) - 1) && bracketOpen != bracketClose) {
      error = 1;
    }
    if ((prev == '(' && (src[i] == '*' || src[i] == '/' || src[i] == '^')) ||
        (src[0] == '*' || src[0] == '/' || src[0] == '^')) {
      error = 1;
    }
    if (src[i] == '(' && next == ')') error = 1;
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

void parserStrToQue(Node** rear, Node** front, char* str) {
  int numIn = 0;
  while (*str) {
    if (isdigit(peekCh(str))) {
      parserDigitFromStrToQue(rear, front, &str);
    } else {
      enqueueOp(rear, front, &str, &numIn);
      printStek(*rear);
    }
  }
}

void parserDigitFromStrToQue(Node** rear, Node** front, char** str) {
  double d;
  if (!checkNumber(*str)) {
    d = strtod((const char*)*str, str);
    pushEnqueue(rear, front, d);
    (*rear)->priority = NUMBER;
    (*rear)->type = NUMBER;
    printf("digit: %lf\n", d);
    printStek(*rear);
  } else {
    printf("incorrect input\n");
    exit(EXIT_FAILURE);
  }
}

/*__________________CALCUCATE_FUNCTIONS__________________*/
double resolution(Node** rear, Node** front) {
  Node *stack_n = NULL, *stack_op = NULL;
  double d;
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

  printf("\n\nstack numbers:\n");
  printStek(stack_n);
  printf("\nstack operators:\n\n");
  printStek(stack_op);
  return popStack(&stack_n);
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
        // pushStack(stack_op, peek(*stack_op));
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
    } else if ((*stack_op)->priority == 4) {
      // pushStack(stack_op, d);
      result = calcUnaryStack(stack_op, stack_n);
      pushStack(stack_n, result);

    } else {
      while (priority <= (*stack_op)->priority) {
        result = calcBinaryStack(stack_op, stack_n);
        pushStack(stack_n, result);
        if (isEmpty(*stack_op)) break;
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
  double num1 = popStack(stack_n);
  return calcBinaryRes(num1, num2, op);
}

double calcBinaryRes(double num1, double num2, int op) {
  double result = 0;
  if (op == PLUS) result = sum(num1, num2);
  if (op == MINUS) result = sub(num1, num2);
  if (op == MULT) result = mul(num1, num2);
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
  if (op == U_MINUS) result = -num;
  if (op == U_PLUS) result = (num < 0) ? -num : num;
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
void pushEnqueue(Node** rear, Node** front, double digit) {
  Node* tmp = newNode(digit);
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
  int index = -1, unary = 0, bcktOpen = 0;
  for (size_t i = 0; i < SIZE_ARRAY; i++) {
    if (!strncmp(*str, strF[i], 3) || !strncmp(*str, strF[i], 4) ||
        !strncmp(*str, strF[i], 2) || !strncmp(*str, strF[i], 1)) {
      index = (int)i;
      if ((peekCh(strF[i]) == '-')) {
        if (*numIn == 0) {
          unary = 1;
        } else if (peekCh(*(str - 1)) == '(') {
          unary = 1;
        }
      }
      break;
    }
  }
  pushEnqueue(rear, front, index);
  char c = peekCh(strF[index]);
  if (c == '(') {
    (*rear)->priority = 0;
    bcktOpen = 1;
  } else if ((c == '+' || c == '-') && !unary) {
    (*rear)->priority = 1;
  } else if (c == '*' || c == '/' || c == 'm') {
    (*rear)->priority = 2;
  } else if (c == '^') {
    (*rear)->priority = 3;
  } else if (c == ')') {
    (*rear)->priority = 5;
  } else {
    (*rear)->priority = 4;
    if (unary) {
      (*rear)->value = (c == '-') ? U_MINUS : U_PLUS;
    }
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
