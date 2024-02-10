#include<stdio.h>
int main()
{
	int n,a;
	printf("ENTER YEAR:");
	scanf("%d",&n);
	a=n%4;
	if(a==0)
	{
		printf("%d IS A LEAP YEAR",n);
	}
	else
	{
		printf("%d IS NOT A LEAP YEAR",n);
	}
	return 0;
}
