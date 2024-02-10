#include<stdio.h>
void fibo(int);
int main()
{
	int n;
	printf("ENTER HOW MUCH FIBO YOU HAVE TO PRINT? :");
	scanf("%d",&n);
	fibo(n);
	return 0;
}
void fibo(int x)
{
	int i,a=0,b=1,c;
	for(i=1;i<=x;i++)
	{
		printf("%d\n",a);
		c=a+b;
		a=b;
		b=c;
	}
}
