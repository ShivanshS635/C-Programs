#include<stdio.h>
void fibo();

int main()
{
	int i;
	for(i=1;i<=5;i++)
	{
		fibo();
	}
	return 0;
}

void fibo()
{
	static int a=0,b=1,c;
	printf("%d\n",a);
	c=a+b;
	a=b;
	b=c;
}
