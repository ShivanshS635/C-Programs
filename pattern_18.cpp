#include<stdio.h>
int main()
{
	int i,j,n=1,sp=4;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=sp;j++)
		{
			printf(" ");
		}
		for(j=i;j>=1;j--)
		{
			printf("%d",j);
		}
		for(j=2;j<=i;j++)
		{
			printf("%d",j);
		}
		sp--;
		printf("\n");
	}
	return 0;
}
