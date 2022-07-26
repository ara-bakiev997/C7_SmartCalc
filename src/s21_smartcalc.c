#include "s21_smartcalc.h"

int main() {
  struct list a = {2}, b = {1}, c = {4};
  list* start = &a;
  a.next = &b;
  b.next = &c;
  c.next = NULL;
  printf("%lf\n", a.value);
  printf("%lf\n", b.value);
  printf("%lf\n", c.value);

  return 0;
}

list* initList(double value) {
  list* tmp;
  tmp = (list*)malloc(sizeof(list));
  if (tmp) {
    tmp->value = value;
    tmp->next = NULL;
  }
  return tmp;
}

// void push(list** src, double value) {
//   list* tmp;
//   tmp = (list*)malloc(sizeof(list));
//   if (tmp) {
//     src
//   }
// }
