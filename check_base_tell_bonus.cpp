//CHECK BASE TELL BONUS
#include<stdio.h>
int main()
{
	int base,b,t;
	printf("INPUT BASIC SALARY:");
	scanf("%d",&base);
	if(base>10000)
	{
		b=0.10*base;
	}
	else
	{
		b=0.05*base;
	}
	t=b+base;
	printf("BONUS: %d\nTOTAL: %d",b,t);
	return 0;
}
