//MAX OF FOUR
#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("ENTER FOUR NUMBERS:");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("%d IS THE LARGEST.",a);
			}
			else
			{
				printf("%d IS LARGEST",d);
			}
		}
		else
		{
			if(c>d)
			{
				printf("%d IS LARGEST",c);
			}
			else
			{
				printf("%d IS LARGEST",d);
			}
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				printf("%d IS LARGEST",b);
			}
			else
			{
				printf("%d IS LARGEST",d);
			}
		}
		else
		{
			if(c>d)
			{
				printf("%d IS LARGEST",c);
			}
			else
			{
				printf("%d IS LARGEST",d);
			}
		}
	}
	return 0;
}
