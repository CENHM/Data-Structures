#include "HEADER.h"

void empty(Stack &stk)
{
	printf("empty? : %d\n\n", EMPTY(stk));
}

void pop(Stack &stk)
{
	printf("status : %d\n\n", POP(stk));	
}

void clear(Stack &stk)
{
	printf("status : %d\n\n", CLEAR(stk));
}

void inistack(Stack &stk)
{
	INISTACK(stk);
	printf("Stack has been initialize.\n\n");
}

void push(Stack &stk)
{
	ElemType elem;
	printf("input the element : ");
	cin >> elem;
	printf("status : %d\n\n", PUSH(stk, elem));
}

void gettop(Stack &stk)
{
	int top;
	if ((top = GETTOP(stk)) == ERROR) printf("NULL\n\n");
	else printf("The top element is %d\n\n", top);
}

void current_size(Stack &stk)
{
	printf("Current size is %d\n\n", CURRENT_SIZE(stk));
}
