#include<stdio.h>
typedef struct recta
{
	int l,b;
} rect;

rect getdata();
void ar(rect);
rect inc(rect);

int main()
{
	rect a;
	a=getdata();
	ar(a);
	a=inc(a);
	ar(a);
	return 0;
}

rect getdata()
{
	rect x;
	printf("enter length and bredth:");
	scanf("%d %d",&x.l,&x.b);
	return x;
}

void ar(rect y)
{
	int ar; 
	ar=y.b*y.l;
	printf("\nArea----->%d",ar);
}

rect inc(rect z)
{
	z.l=2*z.l;
	z.b=z.b*3;
	return z;
}
