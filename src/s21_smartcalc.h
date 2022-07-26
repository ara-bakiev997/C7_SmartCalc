#ifndef SRC_S21_SMARTCALC_H_
#define SRC_S21_SMARTCALC_H_

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum {
  VAL = 1,
  X = 2,
  BRACKETSOPEN = 3,
  BRACKETSCLOSE = 4,
  ADDITION = 5,
  SUBTRACTION = 6,
  MULTIPLICATION = 7,
  DIVISION = 8,
  POWER = 9,
  MODULUS = 10,
  UNARYPLUS = 11,
  UNARYMINUS = 12,
  COS = 13,
  SIN = 14,
  TAN = 15,
  ACOS = 16,
  ASIN = 17,
  ATAN = 18,
  SQRT = 19,
  LN = 20,
  LOG = 21
} type_t;

typedef struct list list;
struct {
  double value;
  int priority;
  type_t type;
  list* next;
} list;
// typedef struct {
//   double value;
//   int priority;
//   type_t type;
//   struct list* next;
// } list;

/*__________________LIST_WORK_FUNCTIONS__________________*/
list* initList(double value);

#endif  // SRC_S21_SMARTCALC_H_