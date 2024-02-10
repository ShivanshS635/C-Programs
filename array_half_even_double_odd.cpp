#include<stdio.h>
int main()
{
	int i,a[5]={10,20,30,40,50},sum=0;
	printf("EACH ELEMENT OF ARRAY IS:");
	for(i=0;i<5;i++)
	{
		if(i%2==0)
		{
			printf("%d ",a[i]/2);
		}
		else
		{
			printf("%d ",a[i]*2);
		}
	}
	return 0;
}
