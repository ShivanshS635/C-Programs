#include<stdio.h>
struct date
{
	int dd;
	int mm;
	int yy;
};

struct stu
{
	int rollnm;
	char nam[20];
	struct date dob;
};

int main()
{
	struct stu s;
	scanf("%d %s %d %d %d",&s.rollnm,s.nam,&s.dob.dd,&s.dob.mm,&s.dob.yy);
	printf("%d %s %d %d %d",s.rollnm,s.nam,s.dob.dd,s.dob.mm,s.dob.yy);
	return 0;
}
