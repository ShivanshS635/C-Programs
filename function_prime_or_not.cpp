#include<stdio.h>
#include<math.h>
void prime(int);
int main()
{
	int n;
	printf("ENTER NUMBER:");
	scanf("%d",&n);
	prime(n);
	return 0;
}

void prime(int x)
{
	int c,i;
	for(i=2;i<=(sqrt(x)+1);i++)
	{
		if(x%i==0)
		{
			c=0;
			break;
		}
		else
		{
			c=1;
		}
	}
	if(c==1)
	{
		printf("PRIME");
	}
	else
	{
		printf("NOT A PRIME");
	}
}
