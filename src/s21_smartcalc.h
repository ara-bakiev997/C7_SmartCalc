#ifndef SRC_S21_SMARTCALC_H_
#define SRC_S21_SMARTCALC_H_

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum {
  SIN,
  COS,
  TAN,
  LOG,
  ASIN,
  ACOS,
  ATAN,
  SQRT,
  LN,
  MOD,
  PLUS,
  MINUS,
  MULT,
  DIV,
  POW,
  BKT_OP,
  BKT_CL,
  OPERATOR,
  NUMBER,
  X
} type_t;

typedef struct Node_s {
  double value;
  int priority;
  type_t type;
  struct Node_s* next;
} Node;

/*__________________GENERAL_WORK_FUNCTIONS__________________*/
Node* newNode(double src);
double peek(Node* src);
int isEmpty(Node* src);
int validation(char src[256]);
char peekCh(char* string);
int checkNumber(char* str);

/*__________________STEK_WORK_FUNCTIONS__________________*/
void pushStack(Node** plist, double value);
double pop(Node** plist);

/*__________________ENQUEUE_WORK_FUNCTIONS__________________*/
void pushEnqueuef(Node** rear, Node** front, double digit);

/*___________________PRINT_FUNCTIONS__________________*/
void printStek(Node* src);

#endif  // SRC_S21_SMARTCALC_H_