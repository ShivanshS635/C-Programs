#include<stdio.h>
int main()
{
	int a[50],b[50],i;
	int n;
	printf("ENTER NUMBER OF ELEMENT YOU WANT TO ENTER:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("ARRAY:");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	for(i=0;i<n;i++)
	{
		b[i]=a[i];
	}
	printf("\nARRAY AFTER COPYING:");
	for(i=0;i<n;i++)
	{
		printf("%d ",b[i]);
	}
	return 0;
}
