#include<stdio.h>

#define max_size 5

int f=-1,r=-1;
int queue[max_size];

void enqueue(int x)
{
	if(r==max_size-1)
	{
		return;
	}
	if(f==-1)
	{
		f++;
	}
	r++;
	queue[r]=x;	
}

void dequeue()
{
	if(r==-1||f>r)
	{
		printf("QUEUE IS EMPTY...");
		return;
	}
	else
	{
		int x=queue[f];
		printf("DELETED ITEM IS %d\n",x);
		f++;
	}
}

int main()
{
	int i;
	
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	enqueue(50);
	
	for(i=f;i<=r;i++)
	{
		printf("%d\n",queue[i]);
	}
	
	dequeue();
	dequeue();
	
	for(i=f;i<=r;i++)
	{
		printf("%d\n",queue[i]);
	}
	
	return 0;
}
