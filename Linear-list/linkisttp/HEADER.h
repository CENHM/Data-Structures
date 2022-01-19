#ifndef LINKISTTP_HEADER_H
#define LINKISTTP_HEADER_H

#include <iostream>
#include <cstdlib>
#include <cstring>
#define ElemType int
#define ERROR -1
#define Status bool
#define OK true
#define ER false
using namespace std;


/*  CONST maxlen = 100005(MAXLENGTH)
 *  TYPE  sqlisttp = RECORD
 *                   elem : ARRAY[1..maxlen]OF elemtp
 *                   last : 1..maxlen
 */
typedef struct Node
{
    ElemType data;
    struct Node *next;
}LinearList;

/****************** Basic *******************/
bool EMPTY(LinearList **);
void VIEW(LinearList **);
void INITIATE(LinearList **);
int  LENGTH(LinearList **);
int  LOCATE(LinearList **, ElemType);
ElemType GET(LinearList **, int);
ElemType PRIOR(LinearList **, ElemType);
ElemType NEXT(LinearList **, ElemType);
Status INSERT(LinearList **, int, ElemType);
Status DELETE(LinearList **, int);
Status CLEAR(LinearList **);
Status INSERTHEAD(LinearList **, ElemType);

void initiate(LinearList **);
void length(LinearList **);
void get(LinearList **);
void prior(LinearList **);
void next(LinearList **);
void locate(LinearList **);
void insert(LinearList **);
void Delete(LinearList **);
void empty(LinearList **);
void clear(LinearList **);
void view(LinearList **);
void inserthead(LinearList **);

/****************** Test *******************/
void Test();

#endif //LINKISTTP_HEADER_H
