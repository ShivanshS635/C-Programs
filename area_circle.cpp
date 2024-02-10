#include<stdio.h>
#include<math.h>
int main()
{
	int a,r;
	printf("ENTER RADIUS:");
	scanf("%d",&r);
	a=3.14*pow(r,2);
	printf("AREA OF CIRCLE:%d",a);
	return 0;
}
