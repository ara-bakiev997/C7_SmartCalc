#include "s21_smartcalc.h"

int main() {
  list* start = NULL;
  list a = {2}, b = {1}, c = {4};
  start = &a;
  a.next = &b;
  b.next = &c;
  c.next = NULL;
  printStek(start);
  return 0;
}

void printStek(list* src) {
  for (list* p = src; p != NULL; p = p->next) {
    printf("%lf\n", p->value);
  }
}

// list* initList(double value) {
//   list* tmp;
//   tmp = (list*)malloc(sizeof(list));
//   if (tmp) {
//     tmp->value = value;
//     tmp->next = NULL;
//   }
//   return tmp;
// }

// void push(list** src, double value) {
//   list* tmp;
//   tmp = (list*)malloc(sizeof(list));
//   if (tmp) {
//     src
//   }
// }
