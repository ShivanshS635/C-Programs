#include<stdio.h>
int main()
{
	FILE *fptr;
	char ch;
	fptr=fopen("upper_lower.txt","a");
	while(ch=getchar()!=EOF)
	{
		fputc(ch,fptr);	
	}
	fclose(fptr);
	fptr=fopen("upper_lower.txt","r");
	printf("FILE TEXT BEFORE CONVERSION.\n");
	while(ch=fgetc(fptr)!=EOF)
	{
		printf("%c",ch);
		if(ch>=65&&ch<=90)
		{
			ch=ch+32;
		}
		else
		{
			ch=ch-32;
		}
	}
	printf("FILE TEXT AFTER CONVERSION.\n");
	while((ch=fgetc(fptr))!=EOF)
	{
		printf("%c",ch);
	}
	fclose(fptr);
	return 0;
}
