#include<stdio.h>
int main()
{
	int i,a[5]={10,20,30,40,50},sum=0,avg;
	printf("EACH ELEMENT OF ARRAY IS:");
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
		sum=sum+a[i];		
	}
	avg=sum/5;
	printf("\nSUM:%d \nAVG:%d",sum,avg);
	return 0;
}
