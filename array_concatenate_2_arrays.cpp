#include<stdio.h>
int main()
{
	int a[50],i,b[50],c[50],j,m,n;
	printf("ENTER NUMBER OF INPUTS IN A:");
	scanf("%d",&n);
	printf("ENTER NUMBER OF INPUTS IN B:");
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("ARRAY A:");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("\nARRAY B:");
	for(i=0;i<m;i++)
	{
		printf("%d ",b[i]);
	}
	for(i=0;i<n;i++)
	{
		c[i]=a[i];
	}
	for(j=0;j<n;j++)
	{
		c[i]=b[j];
		i++;
	}
	printf("\nCONCATENATED ARRAY:");
	for(i=0;i<m+n;i++)
	{
		printf("%d ",c[i]);
	}
}
