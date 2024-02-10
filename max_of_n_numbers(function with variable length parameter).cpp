#include<stdio.h>
#include<stdarg.h>
#include<limits.h>

int maxnum(int n,...)
{
	int num,mn,i;
	va_list list;
	va_start(list,n);
	mn=va_arg(list,int);
	for(i=1;i<n;i++)
	{
		num=va_arg(list,int);
		if(num>mn)
		{
			mn=num;
		}
	}
	va_end(list);
	return mn;
}

int main()
{
	printf("%d",maxnum(3,1,2,3));
	return 0;
}
