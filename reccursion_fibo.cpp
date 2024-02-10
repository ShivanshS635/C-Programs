#include<stdio.h>
int fibo(int);
int main()
{
	int i,a,f;
	printf("ENTER NUMBER:");
	scanf("%d",&a);
//	printf("%d",fibo(a));	
	for(i=1;i<=a;i++)
	{
		printf("%d\n",fibo(i));	
	}
	return 0;
}

int fibo(int x)
{
	if(x==1)
		return 0;
	else if(x==2)
		return 1;
	else
		return fibo(x-1)+fibo(x-2);
}
