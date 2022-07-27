#include "s21_smartcalc.h"

int main() {
  Node* start = NULL;
  double str[] = {1.0, 2.0, 3.0};
  for (int i = 0; str[i]; i++) {
    push(&start, str[i]);
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

void printStek(Node* src) {
  int i = 0;
  for (Node* p = src; p != NULL; p = p->next, i++) {
    printf("Node %d = %lf\n", i, p->value);
    printf("This %d = %p\n", i, &p);
    printf("Next %d = %p\n", i, p->next);
  }
}

void push(Node** list, double value) {
  Node* tmp = new_node(value);
  if (tmp) {
    tmp->next = *list;
    *list = tmp;
  }
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

// void push(Node** src, double value) {
//   Node* tmp;
//   tmp = (Node*)malloc(sizeof(Node));
//   if (tmp) {
//     src
//   }
// }
