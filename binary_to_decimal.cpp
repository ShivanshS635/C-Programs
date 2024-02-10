//Binary To Decimal
#include<stdio.h>
#include<math.h>
int main()
{
	int n,s=0,d,i=0;
	printf("ENTER BINARY NUMBER:");
	scanf("%d",&n);
	int temp=n;
	while(n!=0)
	{
		d=n%10;
		s=s+d*pow(2,i);
		n=n/10;
		i++;
	}
	printf("THE BINARY OF %d IS %d.",temp,s);
	return 0;
}
