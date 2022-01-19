#ifndef SQSTKTP_HEADER_H
#define SQSTKTP_HEADER_H

#include <iostream>
#include <cstdlib>
#include <cstring>
#define ARRMAX 10005
#define ElemType int
#define ERROR -1
#define Status bool
#define OK true
#define ER false
using namespace std;

typedef struct sqstk
{
    ElemType elem[ARRMAX];
    int top;
}Stack;

/****************** Basic *******************/

bool EMPTY(Stack &);
Status POP(Stack &);
Status CLEAR(Stack &);
Status INISTACK(Stack &);
Status PUSH(Stack &, ElemType);
ElemType GETTOP(Stack &);
int CURRENT_SIZE(Stack &); 


void empty(Stack &);
void pop(Stack &);
void clear(Stack &);
void inistack(Stack &);
void push(Stack &);
void gettop(Stack &);
void current_size(Stack &);


/****************** Test *******************/
void Test();

#endif //SQSTKTP_HEADER_H
