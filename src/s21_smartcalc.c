#include "s21_smartcalc.h"

int main() {
  // char *str = "9.235+sin(10)-564-28.6*35mod99.7^2";
  char* str = "2-(6-6)";
  // создаем указатели для "очереди"
  Node *front = NULL, *rear = NULL;
  parserStrToQue(&rear, &front, str);
  double res = calculateExpression(&rear, &front);
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
  while (*str) {
    if (isdigit(peekCh(str))) {
      parserDigitFromStrToQue(rear, front, &str);
    } else {
      enqueueOp(rear, front, &str);
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
double calculateExpression(Node** rear, Node** front) {
  Node *stackNum = NULL, *stackOp = NULL;
  double d, num1, num2, op, result;
  int precedence = 0;
  while (*front) {
    if ((*front)->type == OPERATOR) {
      precedence = (*front)->priority;
      d = popEqueue(rear, front);
      while (1) {
        if (isEmpty(stackOp)) {
          pushStack(&stackOp, d);
          stackOp->priority = precedence;
          break;
        } else if ((int)d == BKT_OP) {
          pushStack(&stackOp, d);
          stackOp->priority = precedence;
          break;
        } else if ((int)d == BKT_CL) {
          while (!((int)peek(stackOp) == BKT_OP)) {
            op = popStack(&stackOp);
            num2 = popStack(&stackNum);
            num1 = popStack(&stackNum);
            result = calcRes(num1, num2, op);
            pushStack(&stackNum, result);
          }
          popStack(&stackOp);
          break;
        } else if (precedence > stackOp->priority) {
          pushStack(&stackOp, d);
          stackOp->priority = precedence;
          break;
        } else {
          op = popStack(&stackOp);
          num2 = popStack(&stackNum);
          num1 = popStack(&stackNum);
          result = calcRes(num1, num2, op);
          pushStack(&stackNum, result);
        }
      }
    } else {
      d = popEqueue(rear, front);
      pushStack(&stackNum, d);
      stackNum->priority = NUMBER;
      if (isEmpty(*front)) {
        while (!isEmpty(stackOp)) {
          op = popStack(&stackOp);
          num2 = popStack(&stackNum);
          num1 = popStack(&stackNum);
          result = calcRes(num1, num2, op);
          pushStack(&stackNum, result);
        }
      }
    }
  }
  printf("\n\nstack numbers:\n");
  printStek(stackNum);
  printf("\noperators:\n");
  printStek(stackOp);
  return popStack(&stackNum);
}

double calcRes(double num1, double num2, int op) {
  double result = 0;
  if (op == PLUS) result = sum(num1, num2);
  if (op == MINUS) result = sub(num1, num2);
  if (op == MULT) result = mul(num1, num2);
  if (op == DIV) result = division(num1, num2);
  if (op == MOD) result = fmod(num1, num2);
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

void enqueueOp(Node** rear, Node** front, char** str) {
  char* strF[] = {"sin",  "cos",  "tan", "log", "asin", "acos",
                  "atan", "sqrt", "ln",  "mod", "+",    "-",
                  "*",    "/",    "^",   "(",   ")"};
  int index = -1;
  for (size_t i = 0; i < SIZE_ARRAY; i++) {
    if (!strncmp(*str, strF[i], 3) || !strncmp(*str, strF[i], 4) ||
        !strncmp(*str, strF[i], 2) || !strncmp(*str, strF[i], 1)) {
      index = (int)i;
      break;
    }
  }
  pushEnqueue(rear, front, index);
  char c = peekCh(strF[index]);
  if (c == '(') {
    (*rear)->priority = 0;
  } else if (c == '+' || c == '-') {
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
}

/*___________________PRINT_FUNCTIONS__________________*/

void printStek(Node* src) {
  for (Node* p = src; p != NULL; p = p->next) {
    printf("Value = %lf\n", p->value);
    printf("Adress list= %p\n", p);
    printf("Next = %p\n", p->next);
  }
}
