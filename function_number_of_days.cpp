#include<stdio.h>
int nod(int,int);
int main()
{
	int c,m,y;
	printf("ENTER MONTH:");
	scanf("%d",&m);
	printf("ENTER YEAR:");
	scanf("%d",&y);
	c=nod(m,y);
	printf("%d",c);
	return 0;
}
int nod(int x,int y)
{
	if(x==1||x==3||x==5||x==7||x==8||x==10||x==12)
	{
		return 31;
	}
	else if(x==2)
	{
		if((x%100==0&&x%400==0)||x%4==0)
		{
			return 29;
		}
		else
		{
			return 28;
		}
	}
	else
	{
		return 30;
	}
}
