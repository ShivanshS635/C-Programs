#include<stdio.h>

int sum(int x,int y)
{
	return x+y;
}

int main()
{
	int a=10,b=20;
	int(*sptr)(int,int)=sum;
	int c=sptr(a,b);
	printf("%d",c);
	return 0;
}
