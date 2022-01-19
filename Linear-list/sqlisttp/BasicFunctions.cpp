//
// Created by CENHM on 2022/1/17.
//
#include "HEADER.h"

void INITIATE(LinearList &L)
{
    L.last = 0;
    memset(L.ARRAY, 0, sizeof(ElemType));
    printf("Linear_list has been initialize.\n\n");
}

int LENGTH(LinearList &L)
{
    return L.last;
}

ElemType GET(LinearList &L, int i)
{
    if (i < 1 || i > L.last) return ERROR;
    return L.ARRAY[i - 1];
}

ElemType PRIOR(LinearList &L, int elm)
{
    int i = 0;
    while (L.ARRAY[i] != elm) ++ i;
    if (i == 0) return ERROR;
    return L.ARRAY[-- i];
}

ElemType NEXT(LinearList &L, int elm)
{
    int i = 0;
    while (L.ARRAY[i] != elm) ++ i;
    if (i == L.last - 1) return ERROR;
    return L.ARRAY[++ i];
}

int LOCATE(LinearList &L, ElemType x)
{
    int i = 0;
    while (L.ARRAY[i] != x && i < L.last) ++ i;
    if (i == L.last) return 0;
    return i + 1;
}

Status INSERT(LinearList &L, int i, ElemType b)
{
    if (i < 1 || i > L.last || L.last == MAXLENGTH) return ER;
    for (int j = L.last; j >= i; -- j) L.ARRAY[j] = L.ARRAY[j - 1];
    L.ARRAY[i - 1] = b;
    L.last ++;
    return OK;
}

Status DELETE(LinearList &L, int i)
{
    if (i < 1 || i > L.last) return ER;
    for (int j = i - 1; j < L.last; ++ j) L.ARRAY[j] = L.ARRAY[j + 1];
    L.last --;
    L.ARRAY[L.last] = 0;
    return OK;
}

bool EMPTY(LinearList &L)
{
    if(L.last == 0) return true;
    else return false;
}

Status CLEAR(LinearList &L)
{
    memset(L.ARRAY, 0, sizeof(ElemType));
    L.last = 0;
    return OK;
}

void VIEW(LinearList &L)
{
    printf(">> ");
    for(int i = 0; i < L.last; ++ i)
        printf("%d ", L.ARRAY[i]);
    printf("\n\n");
}

Status INSERTHEAD(LinearList &L, int elm)
{
    L.ARRAY[L.last ++] = elm;
    return OK;
}
