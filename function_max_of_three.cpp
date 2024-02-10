#include<stdio.h>
void max(int,int,int);
int main()
{
	int a,b,c;
	printf("ENTER NUMBERS:");
	scanf("%d %d %d",&a,&b,&c);
	max(a,b,c);
	return 0;
}
void max(int x,int y,int z)
{
	if(x>y)
	{
		if(x>z)
		{
			printf("%d IS THE LARGEST",x);
		}
		else
		{
			
			printf("%d IS THE LARGEST",z);
		}
	}
	else
	{
		if(y>z)
		{
			printf("%d IS THE LARGEST",y);
		}
		else
		{
			printf("%d IS THE LARGEST",z);
		}
	}
}
