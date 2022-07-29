#include "s21_smartcalc.h"

int main() {
  char buf[256] = "(1+4) * 2";
  int error = 0;
  error = validation(buf);

  // int c, b;
  // b = strspn(&buf[i], check);
  // c = !!strspn(&next, checkNum);
  // if ((buf[i] == '*' || buf[i] == '/' || buf[i] == '^' || buf[i] == '+' ||
  //      buf[i] == '-') &&
  //     !strspn(next, checkNum))
  //   error = 1;

  printf("%s\n", (error) ? "ERROR" : "OK");
  return 0;
}

/*__________________STEK_WORK_FUNCTIONS__________________*/
void push(Node** plist, double value) {
  Node* tmp = newNode(value);
  if (tmp) {
    tmp->next = *plist;
    *plist = tmp;
  }
}

double pop(Node** plist) {
  double delete;
  if (*plist) {
    Node* tmp = *plist;
    delete = tmp->value;
    *plist = tmp->next;
    free(tmp);
  }
  return delete;
}

int isEmpty(Node* src) { return src == NULL; }

double peek(Node* src) { return src->value; }

Node* newNode(double value) {
  Node* tmp;
  tmp = (Node*)malloc(sizeof(Node));
  if (tmp) {
    tmp->value = value;
    tmp->next = NULL;
  }
  return tmp;
}

int validation(char src[256]) {
  int error = 0;
  int bracketOpen = 0, bracketClose = 0;
  for (int i = 0; src[i] != '\0' && !error; i++) {
    char prev;
    char next[1] = "";
    next[0] = src[i + 1];
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
  }
  return error;
}

/*___________________PRINT_FUNCTIONS__________________*/

void printStek(Node* src) {
  for (Node* p = src; p != NULL; p = p->next) {
    printf("Value = %lf\n", p->value);
    printf("Adress list= %p\n", p);
    printf("Next = %p\n", p->next);
  }
}

/*___________________STEK_WORK___________________*/
//  Node* start = NULL;
// double str[] = {1.0, 2.0, 3.0};
// for (int i = 0; str[i]; i++) {
//   push(&start, str[i]);
//   printStek(start);
//   printf("\n");
// }
// printf("EMPTY = %s\n\n", isEmpty(start) ? "YES" : "NO");
// for (int i = 0; str[i]; i++) {
//   // pop(&start);
//   printf("POP =%lf\n", pop(&start));
//   printStek(start);
//   printf("\n");
// }
// printf("EMPTY = %s\n\n", isEmpty(start) ? "YES" : "NO");