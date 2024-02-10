//GREET ACCORDING TO AGE
#include<stdio.h>
int main()
{
	int a;
	printf("ENTER YOUR AGE:");
	scanf("%d",&a);
	if(a>50)
	{
		printf("OLD");
	}
	else if(a>=1 && a<=12)
	{
		printf("CHILD");
	}
	else if(a>=13 && a<=19)
	{
		printf("TEENAGER");
	}
	else if(a>=20 && a<=50)
	{
		printf("MATURE");
	}
	return 0;
}
