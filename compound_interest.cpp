#include<stdio.h>
#include<math.h>
int main()
{
	float p,r,t,c;
	printf("ENTER PRINCIPLE AMOUNT:");
	scanf("%f",&p);
	printf("ENTER RATE:");
	scanf("%f",&r);
	printf("ENTER TIME:");
	scanf("%f",&t);
	c=(p*pow(1+r/100,t))-p;
	printf("COMPOUND INTEREST:%f",c);
	return 0;
}
