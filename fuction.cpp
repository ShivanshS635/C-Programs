#include<stdio.h>

int add(int a,int b)
{
	return a+b;
}

int(*fp)(int,int);

int main()
{
	fp=&add(10,20);
	printf("SUM---->%d",fp);
	return 0;
}
