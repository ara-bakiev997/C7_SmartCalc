#include "s21_smartcalc.h"

int main() {
  char buf[256] = "((1+4)) +2 *2";
  int error = 0;
  error = validation(buf);
  if (!error) {
  }

  printf("%s\n", (error) ? "ERROR" : "OK");
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
    // int c, b;
    // b = strspn(&buf[i], check);
    // c = !!strspn(&next, checkNum);
    // if ((buf[i] == '*' || buf[i] == '/' || buf[i] == '^' || buf[i] == '+' ||
    //      buf[i] == '-') &&
    //     !strspn(next, checkNum))
    //   error = 1;
  }
  return error;
}

char peekCh(char* string) { return *string; }

int checkNumber(char* str) {
  int count_dot = 0;
  char c;
  int err = 0;
  while (*str) {
    c = peek_ch(str);
    if (isdigit(c) || ((c == '.'))) {
      if (c == '.') count_dot++;
      // printf("simbollll: %c\n", c);
    } else {
      break;
    }
    str++;
  }
  if (count_dot > 1) err = 1;
  return err;
}

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

/*___________________PRINT_FUNCTIONS__________________*/

void printStek(Node* src) {
  for (Node* p = src; p != NULL; p = p->next) {
    printf("Value = %lf\n", p->value);
    printf("Adress list= %p\n", p);
    printf("Next = %p\n", p->next);
  }
}
