#include<stdio.h>
int main()
{
	int n,a[50],temp,i;
	printf("ENTER NUMBER OF ELEMENTS:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("ARRAY BEFORE REVERSING:");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nREVERSED ARRAY:");
	for(i=n-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
