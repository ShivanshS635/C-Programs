//NUMBER OF DAYS
#include<stdio.h>
int main()
{
	int m,y;
	printf("ENTER MONTH NUMBER:");
	scanf("%d",&m);
	printf("ENTER YEAR:");
	scanf("%d",&y);
	if(m==4||m==6||m==9||m==11)
	{
		printf("30 DAYS");
	}
	else if(m==2 && ((y%100==0 && y%400==0)|| y%4==0))
	{
		printf("29 DAYS");
	}
	else if(m==2 && (y%4!=0))
	{
		printf("28 DAYS");
	}
	else
	{
		printf("31 DAYS");
	}
	return 0;
}
