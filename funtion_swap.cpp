#include<stdio.h>
void swap(int *,int *);
int main()
{
	int a,b;
	printf("ENTER NUMBERS:");
	scanf("%d %d",&a,&b);
	printf("A AND B BEFORE SWAP: %d AND %d\n",a,b);
	swap(&a,&b);
	return 0;
}

void swap(int *x,int *y)
{
	int z;
	z=*x;
	*x=*y;
	*y=z;
	printf("A AND B BEFORE SWAP: %d AND %d",*x,*y);
}
