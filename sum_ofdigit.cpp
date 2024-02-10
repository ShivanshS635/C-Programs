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
		s=s+d;
		n=n/10;
	}
	printf("SUM IS %d",s);
	return 0;
}
