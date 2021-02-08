#include <stdio.h>
/* 
grapste ena programma poy na dexetai san eisodo 5 arithmous 
kai tha emfanizei to megalitero apo aftous
*/

int main(void)
{
	double a1, a2, a3, a4, a5, max;
	printf("Dwse tous 5 arithmous: \n");
	scanf("%lf %lf %lf %lf %lf", &a1, &a2, &a3, &a4, &a5);
	max = a1;
	if(a2 > max) 
		max = a2;
	if(a3 > max) 
		max = a3;
	if(a4 > max) 
		max = a4;
	if(a5 > max) 
		max = a5;
	printf("Megalyteros %lf\n", max);
	return 0;
}
