#include<stdio.h>
struct rectangle
{
	int len;
	int brd;
};
typedef struct rectangle rect;

rect getdata();
void area(rect);
rect increment(rect);
void printdata(rect);

int main()
{
	rect a,b;
	a=getdata();
	printdata(a);
	area(a);
	b=increment(a);
	printdata(a);
	return 0;
}

rect getdata()
{
	rect x;
	printf("ENTER LENGTH:");
	scanf("%d",&x.len);
	printf("ENTER BREADTH:");
	scanf("%d",&x.brd);
	return x;
}

void area(rect x)
{
	int a;
	a=x.len*x.brd;
	printf("AREA:%d",a);
}
rect increment(rect x)
{
	x.len=x.len*2;
	x.brd=x.brd*3;
	return x;
}
void prindata(rect x)
{
	printf("LENGTH:%d",x.len);
	printf("BREADTH:%d",x.brd);
}
