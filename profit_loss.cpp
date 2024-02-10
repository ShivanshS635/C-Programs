//PROFIT OR LOSS
#include<stdio.h>
int main()
{
	int a,b,cp,sp;
	printf("ENTER THE COST PRICE:");
	scanf("%d",&cp);
	printf("ENTER THE SELLING PRICE:");
	scanf("%d",&sp);
	a=cp-sp;
	b=sp-cp;
	if(cp>=sp)
	{
		printf("LOSS OF %d",a);
	}
	else
	{
		printf("PROFIT OF %d",b);
	}
	return 0;
}
