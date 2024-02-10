#include<stdio.h>
int sumdigit(int);
int main()
{
	int n,c;
	printf("ENTER NUMBER:");
	scanf("%d",&n);
	c=sumdigit(n);
	printf("%d",c);
	return 0;
}
int sumdigit(int x)
{
	int n,s=0;
	while(x!=0)
	{
		n=x%10;
		s=s+n;
		x=x/10;
	}
	return s;
}
