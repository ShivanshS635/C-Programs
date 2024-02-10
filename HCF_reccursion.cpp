#include<stdio.h>
void HCF(int,int);
int main()
{
	int a,b;
	printf("ENTER 2 NUMBERS:");
	scanf("%d %d",&a,&b);
	if(a>b)
		HCF(a,b);
	else
		HCF(b,a);
	return 0;
}

void HCF(int x,int y)
{
	int rem=x%y;
	if(rem==0)
	{
		printf("\n HCF:%d",y);
	}
	else
		HCF(y,rem);
		
}
