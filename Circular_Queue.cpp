#include<stdio.h>
#define max 6
int f=-1,r=-1;
int queue[max];

void enqueue(int x)
{
	if(f==-1&&r==-1)
	{
		f=0;
		r=0;
		queue[r]=x;
	}
	else if((f==0 && r==max-1)||f==(r+1)%max)
	{
		printf("\nQUEUE OVERFLOW....");
	}		
	else
	{
		r=(r+1)%max;
		queue[r]=x;
	}
}

void dequeue()
{
	if(f==-1&&r==-1)
	{
		printf("\nQUEUE UNDERFLOW....");
	}
	else if(f==r)
	{
		int item=queue[f];
		printf("\nDELETED---->%d",item);
		f=0;
		r=0;
	}
	else
	{
		int item=queue[f];
		printf("\nDELETED---->%d",item);
		f=(f+1)%max;
	}
}

void display()
{
	int i=f,ch;
	
	if(f==-1&&r==-1)
	{
		printf("\nQUEUE IS EMPTY.....");
	}
	else
	{
		while(i<=r)
		{
			printf("\n%d",queue[i]);
			i=(i+1)%max;
		}
	}
}

int main()
{
	int ch,x;
	while(ch!=4)
	{
		printf("\n1---->INSERT\n2---->DELETE\n3---->DISPLAY\n4---->EXIT\n");
		printf("ENTER YOUR CHOICE:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("ENTER ELEMENT TO INSERT:");
				   scanf("%d",&x);
				   enqueue(x);
				   break;
			case 2:dequeue();
				   break;
			case 3:display();
				   break;
		}
	}
	return 0;
}
