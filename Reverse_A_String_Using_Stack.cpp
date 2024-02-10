#include<stdio.h>

char str[100];
int f=-1,n;

void push(char c)
{
	if(f==n-1)
	{
		printf("STRING OVERFLOW...");
		return;
	}
	f++;
	str[f]=c;
}

void pop()
{
	if(f==-1)
	{
		printf("STRING EMPTY...");
	}
	char item=str[f];
	printf("DELETED CHARACTER---->%c",item);
	f--;
}

void display()
{
	int i=f;
	if(f==-1)
	{
		printf("STRING EMPTY...");
	}
	for(i=f;i>=0;i--)
	{
		printf("%c",str[i]);
	}
}

int main()
{
	char c;
	printf("ENTER THE NUMBER OF CHARACTER IN A STRING:");
	scanf("%d",&n);
	int i;
	printf("ENTER STRING:");
	for(i=1;i<=n;i++)
	{
		fflush(stdin);
		scanf("%c",&c);
		push(c);
	}
	display();
	return 0;
}
