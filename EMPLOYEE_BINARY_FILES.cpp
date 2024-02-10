#include<stdio.h>
#include<string.h>

struct employee{
	int ecode;
	char ename[20];
	char desg[20];
	int sal;
};

typedef struct employee emp;

int main()
{
	FILE *fptr;
	emp e;
	int ic,tot,mt,wt=0,b=0;
	
	fptr=fopen("Employee.dat","a");
	if(fptr==NULL)
	{
		printf("UNABLE TO OPEN FILE.....");
		return 0;
	}
	char rep;
	printf("DO YOU WANT TO ENTER DATA? :");
	scanf("%c",&rep);
	while(rep!='n')
	{
		printf("ENTER EMPLOYEE CODE--->");
		scanf("%d",&e.ecode);
		printf("ENTER EMPLOYEE NAME--->");
		fflush(stdin);
		gets(e.ename);
		printf("ENTER EMPLOYEE DESIGNATION--->");
		fflush(stdin);
		gets(e.desg);
		printf("ENTER EMPLOYEE SALARY--->");
		scanf("%d",&e.sal);
		fwrite(&e,sizeof(e),1,fptr);
		printf("Do You Want To Enter Data:");
		fflush(stdin);
		scanf("%c",&rep);
	}
	fclose(fptr);
	
	fptr=fopen("Employee.dat","r");
	if(fptr==NULL)
	{
		printf("UNABLE TO OPEN FILE.....");
		return 0;
	}
	while((fread(&e,sizeof(e),1,fptr))!=NULL)
	{
		printf("\nEMPLOYEE CODE--->%d",e.ecode);
		printf("\nEMPLOYEE NAME--->%s",e.ename);
		printf("\nEMPLOYE DESIGNATION--->%s",e.desg);
		printf("\nEMPLOYEE SALARY--->%d\n\n",e.sal);
		/*if(strcmp(e.desg,"Manager")==0)
		{
			b=0.1*e.sal;
			mt=mt+e.sal+b;
		}
		else if(strcmp(e.desg,"Worker")==0)
		{
			b=0.05*e.sal;
			wt=wt+e.sal+b;
		}
		else
		{
			printf("WRONG DESIGNATION");
		}
		printf("\nSALARY--------->%d",e.sal+b);
	}
	printf("\nTOTAL MAANAGER SALARY--------->%d",mt);
	printf("\nSALARY--------->%d",wt);*/
	}
	/*rewind(fptr);
	printf("ENTER ITEM CODE TO SEARCH:");
	scanf("%d",&ic);
	while((fread(&e,sizeof(e),1,fptr))!=NULL)
	{
		if(e.ecode==ic)
		{
			printf("\nEMPLOYEE CODE--->%d",e.ecode);
			printf("\nEMPLOYEE NAME--->%s",e.ename);
			printf("\nEMPLOYE DESIGNATION--->%s",e.desg);
			printf("\nEMPLOYEE SALARY--->%d\n\n",e.sal);
		}		
	}*/
	
	int uic,pos=ftell(fptr);
	printf("ENTER THE CODE OF EMLOYEE WHOSE DATA YOU WANT TO UPDATE:");
	scanf("%d",&uic);
	
	while((fread(&e,sizeof(e),1,fptr))!=NULL)
	{
		if(uic==e.ecode)
		{
			
		}
	}
	
	return 0;
}
