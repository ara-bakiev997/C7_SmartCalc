#ifndef SRC_S21_SMARTCALC_H_
#define SRC_S21_SMARTCALC_H_

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum {
  VAL = 1,
  X = 2,
  BROPEN = 3,
  BRCLOSE = 4,
  ADD = 5,
  SUB = 6,
  MUL = 7,
  DIV = 8,
  POW = 9,
  MOD = 10,
  UPLUS = 11,
  UMINUS = 12,
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

typedef struct Node_s {
  double value;
  int priority;
  type_t type;
  struct Node_s* next;
} Node;

/*__________________STEK_WORK_FUNCTIONS__________________*/
void push(Node** plist, double value);
double pop(Node** plist);
int isEmpty(Node* src);
double peek(Node* src);
Node* newNode(double src);
int validation(char src[256]);

/*___________________PRINT_FUNCTIONS__________________*/
void printStek(Node* src);
Node* fillUp(double* str);

#endif  // SRC_S21_SMARTCALC_H_