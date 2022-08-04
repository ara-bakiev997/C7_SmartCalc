#ifndef SRC_S21_SMARTCALC_H_
#define SRC_S21_SMARTCALC_H_

#include <ctype.h>
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

#define SIZE_ARRAY sizeof(strF) / sizeof(strF[0])

/*__________________GENERAL_WORK_FUNCTIONS__________________*/
Node* newNode(double src);
double peek(Node* src);
int isEmpty(Node* src);
int validation(char src[256]);
char peekCh(char* string);
int checkNumber(char* str);
void parserStrToQue(Node** rear, Node** front, char* str);
void parserDigitFromStrToQue(Node** rear, Node** front, char** str);

/*__________________CALCUCATE_FUNCTIONS__________________*/
double calculateExpression(Node** rear, Node** front);
double calcRes(double num1, double num2, int op);
double sum(double num1, double num2);
double sub(double num1, double num2);
double mul(double num1, double num2);
double division(double num1, double num2);

/*__________________STEK_WORK_FUNCTIONS__________________*/
void pushStack(Node** plist, double value);
double popStack(Node** plist);

/*__________________ENQUEUE_WORK_FUNCTIONS__________________*/
void pushEnqueue(Node** rear, Node** front, double digit);
double popEqueue(Node** rear, Node** front);
void enqueueOp(Node** rear, Node** front, char** str);

/*___________________PRINT_FUNCTIONS__________________*/
void printStek(Node* src);

#endif  // SRC_S21_SMARTCALC_H_