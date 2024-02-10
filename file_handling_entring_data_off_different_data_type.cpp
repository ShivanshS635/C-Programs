#include<stdio.h>
int main()
{
	FILE *fptr;
	int rollnum;
	char name[20];
	char rep='y';
	float fees;
	
	fptr=fopen("student.txt","a");
	
	if(fptr==NULL)
	{
		printf("UNABLE TO OPEN FILE....");
		return 0;
	}
	
	while(rep=='y')
	{
		printf("\nENTER ROLL NUM,NAME AND FEES:");
		fflush(stdin);
		scanf("%d %s %f",&rollnum,name,&fees);
		fprintf(fptr,"%d %s %.1f\n",rollnum,name,fees);
		printf("\nDO YOU WANT TO ADD MORE DATA?(Y/N):");
		fflush(stdin);
		scanf("%c",&rep);
	}
	
	fclose(fptr);
	
	fptr=fopen("student.txt","r");
	
	if(fptr==NULL)
	{
		printf("\nUNABLE TO OPEN FILE....");
		return 0;
	}
	
	printf("\nREADING DATA FROM FILE....");
	
	while(fscanf(fptr,"%d %s %f",&rollnum,name,&fees)!=EOF)
	{
		printf("\n\nROLL NUMBR----->%d",rollnum);
		printf("\nNAME----->%s",name);
		printf("\nFEES----->%.1f",fees);
	}
	
	fclose(fptr);
	
	return 0;
}
