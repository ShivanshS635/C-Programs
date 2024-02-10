//SEASONS
#include<stdio.h>
int main()
{
	int m;
	printf("ENTER MONTH NUMBER:");
	scanf("%d",&m);
	if(m==1 || m==2 || m==12)
	{
		printf("WINTER");
	}
	else if(m==3 || m==4 || m==5)
	{
		printf("SPRING");
	}
	else if(m==6 || m==7 || m==8)
	{
		printf("SUMMER");
	}
	else if(m==9 || m==10 || m==11)
	{
		printf("AUTUMN");
	}
	else
	{
		printf("ENTER VALID MONTH NUMBER");
	}
	return 0;
}
