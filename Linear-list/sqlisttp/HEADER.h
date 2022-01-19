
#ifndef SQLISTTP_HEADER_H
#define SQLISTTP_HEADER_H

#include <iostream>
#include <cstdlib>
#include <cstring>
#define MAXLENGTH 100005
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
    ElemType ARRAY[MAXLENGTH];
    int last;
}LinearList;

/****************** Basic *******************/
bool EMPTY(LinearList &);
void VIEW(LinearList &);
void INITIATE(LinearList &L);
int LENGTH(LinearList &);
int LOCATE(LinearList &, ElemType);
ElemType GET(LinearList &, int);
ElemType PRIOR(LinearList &, int);
ElemType NEXT(LinearList &, int);
Status INSERT(LinearList &, int, ElemType);
Status DELETE(LinearList &, int);
Status CLEAR(LinearList &);
Status INSERTHEAD(LinearList &, int);



void initiate(LinearList &);
void length(LinearList &);
void get(LinearList &);
void prior(LinearList &);
void next(LinearList &);
void locate(LinearList &);
void insert(LinearList &);
void Delete(LinearList &);
void empty(LinearList &);
void clear(LinearList &);
void view(LinearList &);
void inserthead(LinearList &);




/****************** Test *******************/
void Test();






#endif //SQLISTTP_HEADER_H
