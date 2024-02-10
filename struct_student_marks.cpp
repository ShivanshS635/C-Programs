#include<stdio.h>
struct student_marks
{
	int rollnum;
	char name[20];
	float maths,phy,chem;
};
typedef struct student_marks sm;
int main()
{
	sm d[3];
	int j,i,rollnm;
	float per;
	char name[20];
	printf("********ENTER STUDENT DETAILS********");
	for(i=0;i<3;i++)
	{
		printf("\nEnter Roll Number:");
		scanf("%d",&d[i].rollnum);
		printf("Enter Name:");
		scanf("%s",&d[i].name);
		printf("Enter Physics Marks:");
		scanf("%f",&d[i].phy);
		printf("Enter Chemistry Marks:");
		scanf("%f",&d[i].chem);
		printf("Enter Maths Marks:");
		scanf("%f",&d[i].maths);
	}
	printf("*********STUDENT DETAILS*********");
	for(i=0;i<3;i++)
	{
		float tot=0;
		printf("\nRoll Number:%d",d[i].rollnum);
		printf("\nName:%s",d[i].name);
		printf("\nPhysics:%.1f",d[i].phy);
		printf("\nChemistry:%.1f",d[i].chem);
		printf("\nMaths:%.1f",d[i].maths);
		tot=tot+d[i].chem+d[i].maths+d[i].phy;
		printf("\nTOTAL MARKS OF STUDENT OF ROLL NUMBER %d:%.1f",d[i].rollnum,tot);
		per=(tot/300)*100;
		if(per>=50)
		{
			printf("\nPASS");
		}
		else
		{
			printf("\nFAIL");
		}
	}
	return 0;
}
