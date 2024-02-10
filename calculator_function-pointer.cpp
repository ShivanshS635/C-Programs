#include<stdio.h>

int add(int x,int y)
{
	return x+y;
}

int sub(int x,int y)
{
	return x-y;
}

int select(int x,int y,int ch)
{
	/*int choice;
	printf("0--->ADDITION\n1--->SUBTRACTION\nENTER YOUR CHOICE:");
	scanf("%d",&choice);*/
	if(ch==0)
		return add(x,y);
	else
		return sub(x,y);
}

int main()
{
	int a=10,b=20;
	
	int(*fn)(int,int,int)=select;
	
	int choice;
	printf("0--->ADDITION\n1--->SUBTRACTION\nENTER YOUR CHOICE:");
	scanf("%d",&choice);
	if(choice==0)
		printf("%d",fn(a,b,choice));
	else
		printf("%d",fn(a,b,choice));
	
	/*int choice;
	printf("0--->ADDITION\n1--->SUBTRACTION\nENTER YOUR CHOICE:");
	scanf("%d",&choice);
	if(choice==0)
		printf("%d",add(a,b));
	else
		printf("%d",sub(a,b));*/
	return 0;
}
