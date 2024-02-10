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
	printf("ARRAY BEFORE RIGHT SHIFT:");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	temp=a[n-1];
	for(i=n-2;i>=0;i--)
	{
		a[i+1]=a[i];
	}
	a[0]=temp;
	printf("\nRIGHT SHIFTED ARRAY:");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}

