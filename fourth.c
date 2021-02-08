#include <stdio.h>
/*
to programma prepei na dexetai ena dekadiko arithmo san eisodo kai na tipwnei:
arista an o vathmos einai 8.5 kai panw
lian kalws an o vathmos einai apo 7 ews 8.5
kalws an o vathmos einai apo 5 ews 7
fail an o vathmos einai apo 0 ews 5

an o vathmos einai ektos oriwn na vgazei minima lathous
*/
int main(void) {
    double a;
    printf("Dwse moy to vathmo sou\n");
    scanf("%f", &a);
    
    if((a > 10) || (a < 0)) {
    	printf("Lathos vathmos");	
	}
    else if((a >= 8.5) && (a <= 10)) {
        printf("ARISTA!");
    }
	else if((a >= 7) && (a < 8.5) ) {
        printf("LIAN KALWS!");
    }
    else if(( a >= 5) && (a < 7) ) {
        printf("KALWS");
    } 
	else {
		printf("FAIL!");
	}   	    
    return 0;
}
