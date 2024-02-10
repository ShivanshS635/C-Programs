#include<stdio.h>
int main()
{
	FILE *fptr1,*fptr2;
	char ch;
	fptr1=fopen("uppertolower1.txt","a");
	if(fptr1==NULL)
	{
		printf("UNABLE TO OPEN FILE....");
		return 0;
	}
	printf("ENTER TEXT AND PRESS ^Z TO EXIT:");
	while((ch=getchar())!=EOF)
	{
		fputc(ch,fptr1);
	}
	fclose(fptr1);
	
	fptr1=fopen("uppertolower1.txt","r");
	fptr2=fopen("uppertolower2.txt","a");
	if(fptr1==NULL)
	{
		printf("UNABLE TO OPEN FILE....");
		return 0;
	}
	
	while((ch=getc(fptr1))!=EOF)
	{
		printf("%c",ch);
		if(ch>=65&&ch<=90)
		{
			fputc(ch+32,fptr2);
		}
		else
		{
			fputc(ch-32,fptr2);
		}
	}
	fclose(fptr1);
	fclose(fptr2);
	fptr2=fopen("uppertolower2.txt","r");
	printf("\nAFTER CONVERSION--->");
	while((ch=getc(fptr2))!=EOF)
	{
		printf("%c",ch);
	}
	return 0;
}
