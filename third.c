#include <stdio.h>
/* 
    i timi tou a prepei na einai 15 kai to b prepei na einai 3.1
    to programma prepei na diorthwthei wste na tipwnei DS Rulez
*/

int main(void) {
    int a = 15;
    double b = 3.1; // to b prepei na ginei double giati o float exei thema sto precision twn sigkrisewn
    if( (a == 15) && (b == 3.1)) {
        printf("DS Rulez!");
    } else {
        printf("Naaaaaaah");
    }
    return 0;
}
