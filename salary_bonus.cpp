#include<stdio.h>
int main()
{
	float bas,bon,t;
	printf("ENTER BASIC SALARY:");
	scanf("%f",&bas);
	bon=0.10*bas;
	t=bas+bon;
	printf("BONUS IS %f and TOTAL SALARY IS %f",bon,t);
	return 0;
}
