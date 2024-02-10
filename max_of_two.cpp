//MAX OF TWO
#include<stdio.h>
int main()
{
	int n,a;
	printf("ENTER 1st NUMBER:");
	scanf("%d",&n);
	printf("ENTER 2nd NUMBER:");
	scanf("%d",&a);
	if(n>a)
	{
		printf("%d IS GREATER THAN %d",n,a);
	}
	else
	{
		printf("%d IS GREATER THAN %d",a,n);
	}
	return 0;
}
