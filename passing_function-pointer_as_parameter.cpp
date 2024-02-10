#include<stdio.h>

void sum(int x,int y)
{
	printf("%d\n",x+y);
}

void max(int x,int y)
{
	if(x>y)
	{
		printf("%d",x);
	}
	else
	{
		printf("%d",y);
	}
}

void execute(int x,int y, void (*fptr)(int,int))
{
	fptr(x,y);
}

int main()
{
	execute(10,20,sum);
	execute(10,30,max);
	return 0;
}
