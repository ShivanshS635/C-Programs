#include<stdio.h>
void swap(int,int);
int a,b;
int main()
{
	printf("ENTER NUMBERS:");
	scanf("%d %d",&a,&b);
	printf("A AND B BEFORE SWAP=%d AND %d\n",a,b);
	swap(a,b);
	return 0;
}

void swap(int a,int b)
{
	int temp=a;
	a=b;
	b=temp;
	printf("A AND B BEFORE SWAP=%d AND %d",a,b);
}
