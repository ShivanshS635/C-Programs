#include<stdio.h>

enum day{sun,mon,tue,wed,thr,fri,sat};

int main()
{
	enum day today,tomorrow;
	today=thr;
	tomorrow=fri;
	printf("today is:%d\n",today);
	printf("tomorrow is:%d",tomorrow);
}
