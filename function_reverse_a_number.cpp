#include<stdio.h>
int reverse(int);
int main()
{
	int n,c;
	printf("ENTER NUMBER:");
	scanf("%d",&n);
	c=reverse(n);
	printf("%d",c);
	return 0;
}
int reverse(int x)
{
	int s=0,n;
	while(x!=0)
	{
		n=x%10;
		s=s*10+n;
		x=x/10;
	}
	return s;
}

