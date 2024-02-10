//MAX OF THREE
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("ENTER 1st NUMBER:");
	scanf("%d",&a);
	printf("ENTER 2nd NUMBER:");
	scanf("%d",&b);
	printf("ENTER 3rd NUMBER:");
	scanf("%d",&c);
	if(a>b && a>c)
	{
		printf("%d GREATER. ",a);
	}
	else if(b>a && b>c)
	{
		printf("%d GREATER.",b);
	}
	else if(c>a && c>b)
	{
		printf("%d GREATER.",c);
	}
	else
	{
		printf("ALL ARE EQUAL.");
	}
	return 0;
}
