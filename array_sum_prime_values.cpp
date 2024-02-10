#include<stdio.h>
int main()
{
	int i,j,a[5]={10,2,3,4,5},sum=0;
	for(i=0;i<5;i++)
	{
		for(j=2;j<a[i];j++)
		{
			if(a[i]%j!=0)
			{
				sum=sum+a[i];
			}
		}
	}
	printf("SUM OF PRIME VALUES:%d",sum);
	return 0;
}
