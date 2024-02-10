#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,s,ar;
	printf("ENTER 1ST SIDE:");
	scanf("%f",&a);
	printf("ENTER 2ND SIDE:");
	scanf("%f",&b);
	printf("ENTER 3RD SIDE:");
	scanf("%f",&c);
	s=(a+b+c)/2;
	ar=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("AREA: %f",ar);
	return 0;
}
