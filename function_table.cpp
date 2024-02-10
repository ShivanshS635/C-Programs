#include<stdio.h>
void table(int);
int main()
{
	int n;
	printf("ENTER NUMBER:");
	scanf("%d",&n);
	table(n);
	return 0;
}
void table(int x)
{
	int i,p;
	for(i=1;i<=10;i++)
	{
		p=x*i;
		printf("%d X %d = %d\n",x,i,p);
	}
}
