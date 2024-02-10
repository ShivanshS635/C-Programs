#include<stdio.h>
int main()
{
	int i,a[5]={10,20,30,40,50};
	printf("EACH ELEMENT OF ARRAY IS:");
	for(i=0;i<5;i++)
	{
		printf("\n%d ",a[i]);
		printf("%d %d",a[i]*a[i],a[i]*a[i]*a[i]);
	}
	return 0;
}
