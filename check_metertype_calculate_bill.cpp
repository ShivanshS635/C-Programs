//CHECK METR TYPE CALCULATE BILL
#include<stdio.h>
int main()
{
	int pr,nr,uc,b;
	float rpu;
	char mt;
	printf("ENTER PREVIOUS READING:");
	scanf("%d",&pr);
	printf("ENTER NEW READING:");
	scanf("%d",&nr);
	printf("ENTER METER TYPE(D/C):");
	scanf("%c",&mt);
	if(mt=="d")
	{
		rpu=4.50;
	}
	else
	{
		rpu=5.50;
	}
	uc=nr-pr;
	b=uc*rpu;
	printf("BILL------------->%d",b);
	return 0;
}
