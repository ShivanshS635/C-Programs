#include<stdio.h>
typedef struct employee
{
	int ecode;
	char nam[20];
	int sal;
} emp;

emp getdata();
void putdata(emp);
emp incr(emp);

int main()
{
	emp a;
	a=getdata();
	putdata(a);
	a=incr(a);
	putdata(a);
	return 0;
}

emp getdata()
{
	emp x;
	printf("enter ecode,name,salary:");
	scanf("%d %s %d",&x.ecode,x.nam,&x.sal);
	return x;
}

void putdata(emp y)
{
	printf("\ncode of employee:%d",y.ecode);
	printf("\nName of employee:%s",y.nam);
	printf("\nSalary of employee:%d",y.sal);
}

emp incr(emp z)
{
	z.sal=z.sal+1000;
	return z;
}
