#include<stdio.h>
#include<string.h>

struct cust{
	char nm[20];
};

typedef struct cust ct;

ct queue[90];
int f=-1,r=-1,n;

void enqueue(char nm[20])
{
	if(r==n-1)
	{
		printf("Overflow");
		return;
	}
	if(f==-1)
	{
		f++;
	}
	r++;
	strcpy(queue,nm);
}

void dequeue()
{
	if(r==-1||f>r)
	{
		printf("Underflow");
		return;
	}
	else
	{
		char item=queue[f];
		printf("\nREMOVED---->%s",item);
		f++;	
	}

}

void display()
{
	int i;
	printf("\nQUEUE---->\n");
	for(i=f;i<=r;i++)
	{
		printf("%s ",queue[i]);
	}
}

int main()
{
	int i;
	char nm[20];
	ct c;
	
	printf("ENTER THE NUMBER OF CUSTOMERS:");
	scanf("%d",&n);
	
	printf("\nEnter Queue:");
	for(i=0;i<n;i++)
	{
		scanf("%s",&nm);
		enqueue(nm);
	}
	char ch;
	printf("\nDo You Want To Pop Any Element?(y/n):");
	fflush(stdin);
	scanf("%c",&ch);
	while(ch!='n')
	{
		dequeue();
		printf("\nDo You Want To Pop Any Element?(y/n):");
		fflush(stdin);
		scanf("%c",&ch);
	}
	
	display();
	return 0;
}
