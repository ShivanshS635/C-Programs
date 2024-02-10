#include<stdio.h>

int add(int x,int y)
{
	return x+y;
}
int sub(int x,int y)
{
	return x-y;
}

int main()
{
	int(*fptr[])(int,int)={add,sub};
	int a=10,b=20;
	int choice;
	printf("enter choice:");
	scanf("%d",&choice);
	if(choice==0||choice==1)
	{
		printf("%d",fptr[choice](a,b));
	}
	return 0;
}
