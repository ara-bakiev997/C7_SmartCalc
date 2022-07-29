#include "s21_smartcalc.h"

int main() {
  char buf[256] = "(1+4) * 2";
  int error = 0;
  for (int i = 0; buf[i] != '\0' && !error; i++) {
    int bracketOpen = 0, bracketClose = 0;
    char prev;
    if (i != 0) prev = buf[i - 1];
    if (buf[i] == '(') {
      bracketOpen++;
    }
    if (buf[i] == ')') {
      bracketClose++;
    }
    error = (bracketOpen < bracketClose) ? 1 : 0;
    if ((prev == '(' && (buf[i] == '*' || buf[i] == '/' || buf[i] == '^')) ||
        (buf[0] == '*' || buf[0] == '/' || buf[0] == '^')) {
      error = 1;
    }
  }
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