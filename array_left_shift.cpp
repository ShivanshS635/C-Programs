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
	printf("ARRAY BEFORE LEFT SHIFT:");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	temp=a[0];
	for(i=0;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	a[i]=temp;
	printf("\nLEFT SHIFTED ARRAY:");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}

