//Armstrong Or Not....
#include<stdio.h>
#include<math.h>
int main()
{
	int n,d,s=0,ctr=0;
	printf("ENTER NUMBER TO CHECK:");
	scanf("%d",&n);
	int temp=n;
	while(n!=0)
	{
		d=n%10;
		ctr++;
		n=n/10;
	}
	n=temp;
	while(n!=0)
	{
		d=n%10;
		s=s+pow(d,ctr);
		n=n/10;
	}
	if(s==temp)
	{
		printf("%d IS AN ARMSTRONG.",temp);
	}
	else
	{
		printf("%d IS NOT AN ARMSTRONG.",temp);
	}
	return 0;
}
