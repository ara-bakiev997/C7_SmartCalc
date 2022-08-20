#ifndef SRC_S21_SMARTCALC_H_
#define SRC_S21_SMARTCALC_H_

#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SUCCESS 1
#define FAILURE 0
#define SIZE_ARRAY sizeof(strF) / sizeof(strF[0])
#define EPS 1e-7

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
  U_MINUS,
  U_PLUS,
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
int start(char* str, double* result);
Node* newNode(double src);
double peek(Node* src);
int isEmpty(Node* src);
int validation(char* src);
char peekCh(char* string);
int checkNumber(char* str);
int parserStrToQue(Node** rear, Node** front, char* str);
int parserDigitFromStrToQue(Node** rear, Node** front, char** str);

/*__________________CALCUCATE_FUNCTIONS__________________*/
double calculateExpression(Node** stack_n, Node** stack_op, double d,
                           int precedence);
int resolution(Node** rear, Node** front, double* result);
double calcBinaryStack(Node** stack_op, Node** stack_n);
double calcBinaryRes(double num1, double num2, int op);
double calcUnaryStack(Node** stack_op, Node** stack_n);
double calcUnaryRes(double num, int op);
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
void enqueueOp(Node** rear, Node** front, char** str, int* numIn);

/*___________________PRINT_FUNCTIONS__________________*/
// void printStek(Node* src);

#endif  // SRC_S21_SMARTCALC_H_
