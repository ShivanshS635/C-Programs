#include<stdio.h>
#include<string.h>

struct student_data
{
	int rollnm;
	char name[20];
	float height;
};
typedef struct student_data sd;

int main()
{
	sd d[3];
	int j,i,rollnm,temp;
	float tot=0;
	char name[20];
	printf("********ENTER STUDENT DETAILS********");
	for(i=0;i<3;i++)
	{
		printf("\nENTER ROLL NUMBER:");
		scanf("%d",&d[i].rollnm);
		printf("ENTER NAME:");
		scanf("%s",&d[i].name);
		printf("ENTER HEIGHT:");
		scanf("%f",&d[i].height);
	}
	printf("********STUDENT DATA BEOFRE SORTING********");
	for(i=0;i<3;i++)
	{
		printf("\nROLL NUMBER:%d",d[i].rollnm);
		printf("\nNAME:%s",d[i].name);
		printf("\nHEIGHT:%f\n",d[i].height);
		//tot=tot+d[i].height;(**AVERAGE HEIGHT**)
	}
	//printf("\n\nAVERAGE HEIGHT OF STUDENTS OF THE CLASS IS : %f",tot/3);
	
	
	//*****LINEAR SEARCH ON THE BASIS OF STUDENT'S ROLL NUMBERS*****
	/*printf("\nENTER THE ROLL NUMBER OF THE STUDENT TO SEARCH:");
	scanf("%d",&rollnm);
	for(i=0;i<3;i++)
	{
		if(d[i].rollnm==rollnm)
		{
			printf("\nROLL NUMBER:%d",d[i].rollnm);
			printf("\nNAME:%s",d[i].name);
			printf("\nHEIGHT:%f\n",d[i].height);
		}
	}*/
	
	//*****LINEAR SEARCH ON THE BASIS OF STUDENT'S NAME*****
	
	/*printf("\nENTER THE NAME OF THE STUDENT TO SEARCH:");
	fflush(stdin);
	gets(name);
	for(i=0;i<3;i++)
	{
		if(strcmp(d[i].name,name)==0)
		{
			printf("\nROLL NUMBER:%d",d[i].rollnm);
			printf("\nNAME:%s",d[i].name);
			printf("\nHEIGHT:%f\n",d[i].height);
		}
	}*/
	
	for(i=1;i<3;i++)
	{
		for(j=0;j<3-i;j++)
		{
			if(d[i+1].height<d[i].height)
			{
				temp=d[i].height;
				d[i].height=d[i+1].height;
				d[i+1].height=temp;
			}
		}
	}
	
	printf("********STUDENT DATA AFTER SORTING********");
	for(i=0;i<3;i++)
	{
		printf("\nROLL NUMBER:%d",d[i].rollnm);
		printf("\nNAME:%s",d[i].name);
		printf("\nHEIGHT:%f\n",d[i].height);
	}
	
	return 0;
}
