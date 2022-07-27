#include "s21_smartcalc.h"

int main() {
  Node* start = NULL;
  double str[] = {1.0, 2.0, 3.0};
  for (int i = 0; str[i]; i++) {
    push(&start, str[i]);
    // printStek(start);
    printf("\n");
  }
  for (int i = 0; str[i]; i++) {
    // pop(&start);
    printf("%lf\n", pop(&start));
    printStek(start);
    printf("\n");
  }
  // printf("Node = %lf\n", start->value);
  // Node a = {2}, b = {1}, c = {4};
  // start = &a;
  // a.next = &b;
  // b.next = &c;
  // c.next = NULL;
  // printStek(start);
  return 0;
}

void push(Node** plist, double value) {
  Node* tmp = new_node(value);
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

Node* new_node(double value) {
  Node* tmp;
  tmp = (Node*)malloc(sizeof(Node));
  if (tmp) {
    tmp->value = value;
    tmp->next = NULL;
  }
  return tmp;
}

double peek(Node* src) { return src->value; }

void printStek(Node* src) {
  int i = 0;
  for (Node* p = src; p != NULL; p = p->next, i++) {
    printf("Node %d = %lf\n", i, p->value);
    printf("This %d = %p\n", i, &p);
    printf("Next %d = %p\n", i, p->next);
  }
}
