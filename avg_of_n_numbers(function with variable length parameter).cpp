#include<stdio.h>
#include<stdarg.h>

float avg(int n,...)
{
	float av,a=0,num;
	int i;
	va_list list;
	va_start(list,n);
	for(i=1;i<=n;i++)
	{
		num=va_arg(list,double);
		a=a+num;
	}
	av=a/n;
	va_end(list);
	return av;
}

int main()
{
	printf("%f",avg(3,4.09,6.08,5.99));
	return 0;
}
