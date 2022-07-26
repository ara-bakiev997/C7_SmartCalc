#include "s21_smartcalc.h"

int main() {
  list a = {2}, b = {1}, c = {4};
  list* start = &a;
  a.next = &b;
  b.next = &c;
  c.next = NULL;
  for (list* p = list; p != NULL; p = p->next) {
    printf("%lf\n", p->value);
  }

  return 0;
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
