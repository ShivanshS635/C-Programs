#include<stdio.h>

int stack[10];
int top=-1;
int n;

void push(int x)
{
	if(top==n-1)
	{
		printf("\nFULL");
		return;
	}
	
	top++;
	stack[top]=x;
}

void pop()
{
	if(top==-1)
	{
		printf("\nEMPTY");
	}
	else
	{
		int item;
		item=stack[top];
		printf("\nDELETED ELEMENT---->%d",item);
		top--;
	}
}

void display()
{
	if(top==-1)
	{
		printf("\nEMPTY");
	}
	int i;
	for(i=0;i<=top;i++)
	{
		printf("\n%d",stack[i]);
	}
}

int main()
{
	printf("NUMBER OF ELEMENTS:");
	scanf("%d",&n);
	
	display();
	
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	
	display();
	
	pop();
	pop();
	
	display();
		
	return 0;
}
