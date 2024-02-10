#include<stdio.h>
#include<stdarg.h>


int sum(int n,...)
{
	int sum=0,i,num;
	va_list list;
	va_start(list,n);
	for(i=1;i<=n;i++)
	{
		num=va_arg(list,int);
		sum=sum+num;
	}
	va_end(list);
	return sum;
}

int main()
{
	printf("%d",sum(4,1,2,3,4));
	return 0;
}
