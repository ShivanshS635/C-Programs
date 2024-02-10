#include<stdio.h>
void palindrome(int);
int main()
{
	int n,c;
	printf("ENTER NUMBER:");
	scanf("%d",&n);
	palindrome(n);
	return 0;
}
void palindrome(int x)
{
	int s=0,n;
	int temp=x;
	while(x!=0)
	{
		n=x%10;
		s=s*10+n;
		x=x/10;
	}
	if(temp==s)
	{
		printf("PALINDROME");
	}
	else
	{
		printf("NOT A PALINDROME");
	}
}

