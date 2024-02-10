#include<stdio.h>
int main()
{
	int n,ctr=0,num,a[50],temp,i;
	printf("ENTER NUMBER OF ELEMENTS:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("ARRAY :");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nENTER NUMBER YOU WANT TO SEARCH:");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(a[i]==num)
		{
			printf("\n%d FOUND AT %d INDEX",num,i);
			ctr++;
		}
	}
	if(ctr==0)
	{
		printf("\n%d NOT IN ARRAY.",num);
	}
	return 0;
}
