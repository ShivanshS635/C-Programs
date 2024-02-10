#include<stdio.h>
#include<math.h>
int main()
{
	int n,c,t1,t2,t3,i,s,n1,x1,s1=0,total;
	printf("ENTER NUMBER:");
	scanf("%d",&n);
	int temp=n;
	while(n!=0)
	{
		c=c+1;
		n=n/10;
	}
	n=temp;
	for(i=1;i<=c;i++)
	{
		if(i==1)
		{
			t1=n%10;
		}
		else if(i==c)
		{
			t2=n%10;
		}
		else
		{
			t3=n%10;
			s=s*10+t3;
		}
		n=n/10;
	}
	while(s!=0)
	{
		n1=s%10;
		s1=s1*10+n1;
		s=s/10;
	}
	total=t1*pow(10,c-1)+s1*10+t2;
	printf("%d",total);
	return 0;
}
