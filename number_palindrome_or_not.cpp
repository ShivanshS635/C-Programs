//Palindrome Or Not....
#include<stdio.h>
int main()
{
	int n,d,s=0;
	printf("ENTER NUMBER TO CHECK:");
	scanf("%d",&n);
	int temp=n;
	while(n!=0)
	{
		d=n%10;
		s=s*10+d;
		n=n/10;
	}
	if(s==temp)
	{
		printf("%d IS A PALINDROME.",temp);
	}
	else
	{
		printf("%d IS NOT A PALINDROME.",temp);
	}
	return 0;
}
