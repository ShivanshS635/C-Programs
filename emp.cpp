#include<stdio.h>

struct employee
{
	int eid;
	char ename[20];
	float sal;
};

int main()
{
	employee data;
	for(int i=0; i<3;i++)
	{
		scanf("%d %s %f",&data.eid,data.ename,&data.sal);
	}
	for(int i=0; i<3;i++)
	{
		printf("%d %s %f",data.eid,data.ename,data.sal);
	}
	return 0;
}
