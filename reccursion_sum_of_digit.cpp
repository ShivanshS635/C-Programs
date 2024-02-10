#include<stdio.h>
int sod(int);

int main()
{
	int a,s;
	printf("ENTER NUMBER:");
	scanf("%d",&a);
	s=sod(a);
	printf("%d",s);
	return 0;
}

int sod(int x)
{
	if(x==0)
	{
		return 0;
	}
	else
	{
		return x%10+sod(x/10);
	}
}
