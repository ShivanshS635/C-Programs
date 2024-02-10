#include<stdio.h>
int main()
{
	int i=1,j;
	int v=i;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",v);
			v++;
		}
		printf("\n");
	}
	return 0;
}
