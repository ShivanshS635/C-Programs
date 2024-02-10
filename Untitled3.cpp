#include<stdio.h>
int f=-1,r=-1,q[100];
int i,n;

void enqueue(int x)
{
	if(r==n-1)
	{
		printf("\nfullll");
	}
	if(f==-1)
	{
		f++;
	}
	r++;
	q[r]=x;
}
void dequeue()
{
	if(r==-1 || f>r)
	{
		printf("\nemptyyyy");
	}
	else
	{
		int item;
		item=q[f];
		printf("\n%d deleted : %d",item);
		f++;
	}	
}
void display()
{
	if(r==-1 || f>r)
	{
		printf("\nemptyyyy");
	}
	for(i=f;i<=r;i++)
	{
		printf("%d ",q[i]);
	}
}

int main()
{
	int x;
	printf("\nno of enteries:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		enqueue(x);
	}
	display();
	
	return 0;
}
