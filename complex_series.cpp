#include<stdio.h>
#include<math.h>
int main()
{
	int x,n,i,fact=1,p;
	float d,sum=0;
	printf("ENTER VALUE:");
	scanf("%d",&x);
	printf("ENTER VALUE UPTO WHICH YOU HAVE TO EXPAND:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
		p=pow(x,i);
		d=(float)p/fact;
		if(i%2==0)
		{
			sum=sum-d;
		}
		else
			sum=sum+d;
	}
	printf("%f",sum);
	return 0;
}
