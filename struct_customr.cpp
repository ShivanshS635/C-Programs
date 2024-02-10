#include<stdio.h>
struct customr
{
	int id;
	char nam[20];
	float salary;
};

int main()
{
	struct customr s;
	scanf("%d %s %f",&s.id,s.nam,&s.salary);
	printf("%d %s %f",s.id,s.nam,s.salary);
	return 0;
}
