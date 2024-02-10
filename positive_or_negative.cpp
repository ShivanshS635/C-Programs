//positiv then
#include<stdio.h>
int main()
{
	int j,i,n,num1,num,p;
	printf("ENTER NUMBER OF INPUTS:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		int fact=1;
		printf("\nENTER NUMBER:");
		scanf("%d",&num);
		if(num>=0)
		{
			for(j=num;j>=1;j--)
			{
				fact=fact*j;
			}
		printf("%d!=%d",num,fact);
		}
		else
		{
			num1=num-2*num;
			for(j=2;j<num1;j++)
			{
				if(num1%j==0)
				{
					p=1;
					break;
				}
				else
				{
					p=0;
				}
			}
			if(p==0)
			{
				printf("%d IS A PRIME NUMBER.",num1);
			}
			else
			{
				printf("%d IS NOT A PRIME.",num1);
			}
		}
	}
	return 0;
}
