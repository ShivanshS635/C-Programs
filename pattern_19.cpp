#include<stdio.h>
int main()
{
	int i,j,sp=4;
	int x=2;
	for(i=1;i<=5;i++)
	{
		int v=i;
		for(j=1;j<=sp;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",v);
			v++;
		}
		for(j=2*(i-1);j>=i;j--)
		{
			printf("%d",j);
		}
		sp--;
		printf("\n");
	}
	return 0;
}
