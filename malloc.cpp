#include<stdio.h>
#include<malloc.h>
int bsort()
int main()
{
	int *a,n,i;
	printf("ENTER NUMBER OF ELEMENTS IN ARRAY:");
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	printf("\nENTER %d NUMBERS:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",a+i);
	}
	printf("\nARRAY IS:");
	for(i=0;i<n;i++)
	{
		printf("%d ",*(a+i));
	}
	return 0;
}
