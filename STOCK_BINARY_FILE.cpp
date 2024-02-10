#include<stdio.h>
#include<string.h>

typedef struct stock{
	int icode;
	char iname[20];
	int qoh;
	int price;
} s;

int main()
{
	s s;
	char rep;
	int tot=0;
	FILE *fptr;
	fptr=fopen("STOCK.dat","a");
	if(fptr==NULL)
	{
		printf("UNABLE TO OPEN FILE.......");
		return 0;
	}
	rep='y';
	while(rep!='n')
	{
		printf("ENTER ITEM CODE--->");
		scanf("%d",&s.icode);
		printf("ENTER ITEM NAME--->");
		fflush(stdin);
		gets(s.iname);
		printf("ENTER QUANTITY ON HAND--->");
		scanf("%d",&s.qoh);
		printf("ENTER ITEM PRICE--->");
		scanf("%d",&s.price);
		fwrite(&s,sizeof(s),1,fptr);
		printf("Do You Want To Enter Data:");
		fflush(stdin);
		scanf("%c",&rep);
	}
	fclose(fptr);
	fptr=fopen("STOCK.dat","r");
	if(fptr==NULL)
	{
		printf("UNABLE TO OPEN FILE.....");
		return 0;
	}
	
	printf("----------READING DATA----------");
	while((fread(&s,sizeof(s),1,fptr))!=NULL)
	{
		printf("\nITEM CODE--->%d",s.icode);
		printf("\nITEM NAME--->%s",s.iname);
		printf("\nQUANTITY ON HAND--->%d",s.qoh);
		printf("\nITEM PRICE--->%d\n\n",s.price);
		tot=tot+s.qoh;
	}
	printf("TOTAL QUANTITY ON HAND:%d",tot);
	return 0;
}
