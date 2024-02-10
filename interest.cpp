#include<stdio.h>
int main()
{
	int a,p,r,t;
	printf("ENTER PRINCIPLE:");
	scanf("%d",&p);
	printf("ENTER RATE:");
	scanf("%d",&r);
	printf("ENTER TIME:");
	scanf("%d",&t);
	a=(p*r*t)/100;
	printf("INTEREST:%d",a);
	return 0;
}
