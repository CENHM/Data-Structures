#include "HEADER.h"

void initiate(LinearList **head)
{
    INITIATE(&(*head));
}

void length(LinearList **head)
{
    printf("The length is %d.\n\n", LENGTH(&(*head)));
}

void get(LinearList **head)
{
    int pos, tmp;
    printf("input the position : ");
    cin >> pos;
    if ((tmp = GET(&(*head), pos)) != -1) printf("The %dth element is %d.\n\n", pos, tmp);
    else printf("NULL\n\n");
}

void prior(LinearList **head)
{
    ElemType elm;
    int tmp;
    printf("input the element : ");
    cin >> elm;
    if ((tmp = PRIOR(&(*head), elm)) != -1) printf("The priority element is %d.\n\n", tmp);
    else printf("NULL\n\n");
}

void next(LinearList **head)
{
    ElemType elm;
    int tmp;
    printf("input the element : ");
    cin >> elm;
    if ((tmp = NEXT(&(*head), elm)) != -1) printf("The next element is %d.\n\n", tmp);
    else printf("NULL\n\n");
}

void locate(LinearList **head)
{
    ElemType elm;
    printf("input the element : ");
    cin >> elm;
    printf("This value is the %dth element in the list.\n\n", LOCATE(&(*head), elm));
}

void insert(LinearList **head)
{
    ElemType elm;
    int pos;
    printf("input the position and the element : ");
    cin >> pos >> elm;
    printf("status : %d\n\n", INSERT(&(*head), pos, elm));
}

void Delete(LinearList **head)
{
    int pos;
    printf("input the position : ");
    cin >> pos;
    printf("status : %d\n\n", DELETE(&(*head), pos));
}

void empty(LinearList **head)
{
    printf("empty? : %d\n\n", EMPTY(&(*head)));
}

void clear(LinearList **head)
{
    printf("status : %d\n\n", CLEAR(&(*head)));
}

void view(LinearList **head)
{
    VIEW(&(*head));
}

void inserthead(LinearList **head)
{
    ElemType elm;
    printf("input the element : ");
    cin >> elm;
    printf("status : %d\n\n", INSERTHEAD(&(*head), elm));
}
