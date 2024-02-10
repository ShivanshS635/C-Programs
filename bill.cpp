#include<stdio.h>
int main()
{
	float rpu,pr,nr,uc,b;
	printf("ENTER RATE PER UNIT:");
	scanf("%f",&rpu);
	printf("ENTER PREVIOUS READINGS:");
	scanf("%f",&pr);
	printf("ENTER NEW READINGS:");
	scanf("%f",&nr);
	uc=nr-pr;
	b=uc*rpu;
	printf("UNIT CONSUMED:%f\nBILL:%f",uc,b);
	return 0;
}
