#include "HEADER.h"

void INITIATE(LinearList **L)
{
    (*L) = (LinearList*) malloc(sizeof(LinearList));
    (*L)->next = NULL;
    printf("Linear_list has been initialize.\n\n");
}

int LENGTH(LinearList **L)
{
    int len = 0;
    LinearList *ptr = *L;
    for (len = 0; ptr->next != NULL; ++ len, ptr = ptr->next) {}
    return len;
}

ElemType GET(LinearList **L, int i)
{
    LinearList *ptr = (*L)->next;
    if (i < 1) return ERROR;
    while(-- i && ptr != NULL) ptr = ptr->next;
    if (i > 0 || ptr == NULL) return ERROR;
    return ptr->data;
}

ElemType PRIOR(LinearList **L, ElemType elm)
{
    LinearList *fast = (*L)->next, *slow = *L;
    while (fast->data != elm && fast != NULL) {
    	fast = fast->next;
    	slow = slow->next;
	}
    if (slow == *L || fast == NULL) return ERROR;
    return fast->data;
}

ElemType NEXT(LinearList **L, ElemType elm)
{
    LinearList *fast = (*L)->next;
    while (fast->data != elm && fast != NULL) fast = fast->next;
    if (fast == NULL || fast->next == NULL) return ERROR;
    return fast->next->data;
}

int LOCATE(LinearList **L, ElemType x)
{
    int pos;
    LinearList *ptr = (*L)->next;
    for (pos = 1; ptr->data != x && ptr != NULL; ++ pos, ptr = ptr->next) {}
    if (ptr == NULL) return 0;
    return pos;
}

Status INSERT(LinearList **L, int i, ElemType b)
{
    if (i < 1 || EMPTY(&(*L))) return ER;
	LinearList *fast = (*L)->next, *slow = *L;
    while (-- i && fast != NULL) {
    	fast = fast->next;
    	slow = slow->next;
	}
	if (fast == NULL) return ER;
	LinearList *tmp = (LinearList*)malloc(sizeof(LinearList));
	tmp->data = b;
	slow->next = tmp;
	tmp->next = fast;
    return OK;
}

Status DELETE(LinearList **L, int i)
{
    if (i < 1 || EMPTY(&(*L))) return ER;
    LinearList *fast = (*L)->next, *slow = *L;
    while (-- i && fast != NULL) {
    	fast = fast->next;
    	slow = slow->next;
	}
	if (fast == NULL) return ER;
	slow->next = fast->next;
    return OK;
}

bool EMPTY(LinearList **L)
{
    if ((*L)->next == NULL) return true;
    else return false;
}

Status CLEAR(LinearList **L)
{
    (*L)->next = NULL;
    return OK;
}

void VIEW(LinearList **L)
{
    printf(">> ");
    LinearList *ptr = (*L)->next;
    while (ptr != NULL) {
    	printf("%d ", ptr->data);
    	ptr = ptr->next;
	}
    printf("\n\n");
}

Status INSERTHEAD(LinearList **L, ElemType elm)
{
    LinearList *tmp = (LinearList*)malloc(sizeof(LinearList));
    tmp->next = (*L)->next;
    (*L)->next = tmp;
    tmp->data = elm;
    return OK;
}
