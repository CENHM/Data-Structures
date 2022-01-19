#include "HEADER.h"

bool EMPTY(Stack &S)
{
	if (S.top == 0) return true;
	return false;
}

Status POP(Stack &S)
{
	if (S.top == 0) return ER;
	-- S.top;
	return OK; 
}

Status CLEAR(Stack &S)
{
	S.top = 0;
	return OK; 
}

Status INISTACK(Stack &S)
{
	S.top = 0;
	memset(S.elem, 0, sizeof(ElemType));
	return OK; 
}

Status PUSH(Stack &S, ElemType x)
{
	if (S.top == ARRMAX - 1) return ER;
	S.elem[++ S.top] = x;
	return OK;
}

ElemType GETTOP(Stack &S)
{
	if (S.top == 0) return ERROR;
	return S.elem[S.top];
}

int CURRENT_SIZE(Stack &S)
{
	return S.top;
}
