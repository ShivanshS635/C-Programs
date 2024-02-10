#include<stdio.h>
int sum_single(int n);

int main()
{
	int a,s;
	printf("ENTER DIGIT:");
	scanf("%d",&a);
	s=sum_single(a);
	printf("%d",s);
	return 0;
}

int sum_single(int x)
{
	if(sum_single(x>=10))
	{
		if(x<10)
		{
			return x ;
		}
		else
		{
			return x%10+sum_single(x/10);
		}
	}
	else
		return x;
}
