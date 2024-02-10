#include<stdio.h>
int main()
{
	float bas,hra,da,pf,g,n;
	printf("ENTER BASIC SALARY:");
	scanf("%f",&bas);
	printf("ENTER HRA:");
	scanf("%f",&hra);
	printf("ENTER DA:");
	scanf("%f",&da);
	printf("ENTER PF:");
	scanf("%f",&pf);
	g=bas+hra+da;
	n=g-pf;
	printf("GROSS IS %f and NET SALARY IS %f",g,n);
	return 0;
}
