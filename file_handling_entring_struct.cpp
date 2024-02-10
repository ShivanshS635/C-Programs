#include<stdio.h>

struct student
{
	int rollnm;
	char name[20];
	float fees;
};

typedef struct student s;

int main()
{
	s data;
	FILE *fptr;
	char rep;
	
	fptr=fopen("student1.dat","a");
	
	if(fptr==NULL)
	{
		printf("UNABLE TO OPEN FILE.....");
		return 0;
	}
	
	printf("DO YOU WANT TO ENTER DATA?(y/n):");
	scanf("%c",&rep);
	
	while(rep=='y')
	{
		printf("\nENTER ROLL NUMBER,NAME AND FEES:");
		scanf("%d,%s,%f",&data.rollnm,data.name,&data.fees);
		fwrite(&data,sizeof(data),1,fptr);
		printf("\nDO YOU WANT TO ADD MORE DATA?(y/n):");
		fflush(stdin);
		scanf("%c",&rep);
	}
	
	fclose(fptr);
	
	fptr=fopen("student1.dat","r");
	
	if(fptr==NULL)
	{
		printf("\nUNABLE TO OPEN FILE.....");
		return 0;
	}
	
	printf("\nREADING DATA FROM FILE.....");
	
	while((fread(&data,sizeof(data),1,fptr))!=NULL)
	{
		printf("\n\nROLL NUMBER----->%d",data.rollnm);
		printf("\nNAME----->%s",data.name);
		printf("\nFEES----->%.2f",data.fees);
	}
	
	fclose(fptr);
	
	return 0;
}
