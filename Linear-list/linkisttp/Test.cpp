#include "HEADER.h"

void Test()
{
    int option;
    char s[] = "1:LENGTH\n2:GET\n3:PRIOR\n4:NEXT\n5:LOCATE\n6:INSERT\n"
               "7:DELETE\n8:EMPTY\n9:CLEAR\n10:VIEW\n11:INSERTHEAD\n";
    LinearList *head;
    initiate(&head);
    cout << s << endl;
    printf("option : ");
    while ((cin >> option) && option != '#') {
        switch (option) {
            case 1 : length(&head); break;
            case 2 : get(&head)   ; break;
            case 3 : prior(&head) ; break;
            case 4 : next(&head)  ; break;
            case 5 : locate(&head); break;
            case 6 : insert(&head); break;
            case 7 : Delete(&head); break;
            case 8 : empty(&head) ; break;
            case 9 : clear(&head) ; break;
            case 10: view(&head)  ; break;
            case 11: inserthead(&head); break;
            default: printf("ERROR!\n\n");
        }
        printf("option : ");
    }
}
