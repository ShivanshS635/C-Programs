#include<stdio.h>
int main()
{
	int a[50],b[50],c[50],i,j,m;
	printf("ENTER NUMBER OF ELEMENTS IN 1st AND 2nd ARRAY:");
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("1st ARRAY:");
	for(i=0;i<m;i++)
	{
		printf("%d ",a[i]);
	}
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("\n2nd ARRAY:");
	for(i=0;i<m;i++)
	{
		printf("%d ",b[i]);
	}
	for(i=0;i<m;i++)
	{
		c[i]=a[i]+b[i];
	}
	printf("\nADDED ARRAY:");
	for(i=0;i<m;i++)
	{
		printf("%d ",c[i]);
	}
	return 0;
}

/*#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5},b[5]={6,7,8,9,10};
	return 0;
}*/
