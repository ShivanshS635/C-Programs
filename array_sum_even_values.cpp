#include<stdio.h>
int main()
{
	int i,a[5]={10,20,30,40,50},sum=0;
	printf("EACH ELEMENT OF ARRAY IS:");
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
		if(a[i]%2==0)
		{
			sum=sum+a[i];
		}
	}
	printf("SUM OF EVEN VALUES:%d",sum);
	return 0;
}
