#include "HEADER.h"

void Test()
{
    int option;
    char s[] = "1:EMPTY\n2:POP\n3:CLEAR\n4:PUSH\n5:GETTOP\n6:CURRENTSIZE\n";
    Stack stk;
    inistack(stk);
    cout << s << endl;
    while ((cin >> option) && option != '#') {
        switch (option) {
            case 1 : empty(stk) ; break;
            case 2 : pop(stk)   ; break;
            case 3 : clear(stk) ; break;
            case 4 : push(stk)  ; break;
            case 5 : gettop(stk); break;
            case 6 : current_size(stk); break;
            default: printf("ERROR!\n\n");
        }
    }
}

