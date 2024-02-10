//PERCENTAGE
#include<stdio.h>
int main()
{
	float a,b,c,per;
	printf("ENTER MARKS OF PHYSICS:");
	scanf("%f",&a);
	printf("ENTER MARKS OF CHEMISTRY:");
	scanf("%f",&b);
	printf("ENTER MARKS OF MATHS:");
	scanf("%f",&c);
	per=((a+b+c)/300)*100;
	if(per>=75)
	{
		printf("DISTICNTION");
	}
	else if(per>60 && per <75)
	{
		printf("FIRST DIVISION");
	}
	else if(per>50 && per<60)
	{
		printf("SECOND DIVISION");
	}
	else
	{
		printf("FAIL");
	}
	return 0;
}
