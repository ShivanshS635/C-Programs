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
	int max=a[0],min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		else if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("MAXIMUM:%d",max);
	printf("MINIMUM:%d",min);
	return 0;
}
