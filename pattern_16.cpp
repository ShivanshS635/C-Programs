#include<stdio.h>
int main()
{
	int i,j,n=1,m=5;
	for(i=4;i>=1;i--)
	{
		for(j=i-1;j>=1;j--)
		{
			printf(" ");
		}
		for(j=n;j>=1;j--)
		{
			printf("*");
		}
		n+=2;
		printf("\n");
	}
	
	for(i=1;i<=3;i++)
	{
		for(j=i;j>=1;j--)
		{
			printf(" ");
		}
		for(j=m;j>=1;j--)
		{
			printf("*");
		}
		m-=2;
		printf("\n");
	}
	return 0;
}
