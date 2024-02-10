#include<stdio.h>
int fact(int);
int main()
{
	int i,a[5]={1,2,3,4,5};
	printf("EACH ELEMENT OF ARRAY IS:");
	for(i=0;i<5;i++)
	{
		printf("%d ",fact(a[i]));
	}
	return 0;
}
int fact(int x)
{
	int i,fact=1;
	for(i=x;i>=1;i--)
	{
		fact=fact*i;
	}
	return fact;
}
