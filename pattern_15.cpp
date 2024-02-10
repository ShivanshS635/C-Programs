#include<stdio.h>
int main()
{
	int i,j,n=1;
	for(i=4;i>0;i--)
	{
		for(j=i-1;j>0;j--)
		{
			printf(" ");
		}
		for(j=n;j>=1;j--)
		{
			printf("*");
		}
		n=n+2;
		printf("\n");
	}
	return 0;
}
