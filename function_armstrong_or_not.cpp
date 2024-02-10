#include<stdio.h>
#include<math.h>
void armstrong(int);
int main()
{
	int n;
	printf("ENTER NUMBER:");
	scanf("%d",&n);
	armstrong(n);
	return 0;
}
void armstrong(int x)
{
	int i,s=0,c=0,n;
	int temp=x;
	while(x!=0)
	{
		c=c+1;
		x=x/10;
	}
	x=temp;
	while(x!=0)
	{
		n=x%10;
		s=s+pow(n,c);
		x=x/10;
	}
	if(temp==s)
	{
		printf("ARMSTRONG");
	}
	else
	{
		printf("NOT AN ARMSTRONG");
	}
}
