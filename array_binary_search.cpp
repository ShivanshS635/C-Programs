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
	int m,l=0;
	int h=n-1;
	int j=0;
	while(l<=h)
	{
		m=(l+h)/2;
		if(a[m]>num)
		{
			h=m-1;
			j++;
		}
		else if(a[m]<num)
		{
			l=m+1;
			j++;
		}
		else
		{
			printf("%d FOUND AT %d INDEX",num,j);
			j++;
			return 0;
		}		
	}
	printf("%d NOT FOUND.");
	return 0;
}
	
