#include<stdio.h>
int sum_nnumber(int n);

int main()
{
	int a,s;
	printf("ENTER NUMBER UPTO WHICH YOU HAVE TO FIND THE SUM:");
	scanf("%d",&a);
	s=sum_nnumber(a);
	printf("%d",s);
	return 0;
}

int sum_nnumber(int x)
{
	if(x==0)
	{
		return 0;
	}
	else
	{
		return x+sum_nnumber(x-1);
	}
}
