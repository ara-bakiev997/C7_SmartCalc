#include "s21_smartcalc.h"

int main() {
  Node* start = NULL;
  double str[] = {1.0, 2.0, 3.0};
  for (int i = 0; str[i]; i++) {
    push(&start, str[i]);
    printStek(start);
    printf("\n");
  }
  printf("EMPTY = %s\n\n", isEmpty(start) ? "YES" : "NO");
  for (int i = 0; str[i]; i++) {
    // pop(&start);
    printf("POP =%lf\n", pop(&start));
    printStek(start);
    printf("\n");
  }
  printf("EMPTY = %s\n\n", isEmpty(start) ? "YES" : "NO");
  // printf("Node = %lf\n", start->value);
  // Node a = {2}, b = {1}, c = {4};
  // start = &a;
  // a.next = &b;
  // b.next = &c;
  // c.next = NULL;
  // printStek(start);
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
