#include<stdio.h>
int main()
{
	int n,a;
	printf("ENTER NUMBER:");
	scanf("%d",&n);
	a=n%2;
	if(a==0)
	{
		printf("NUMBER IS EVEN");
	}
	else
	{
		printf("NUMBER IS ODD");
	}
	return 0;
}
