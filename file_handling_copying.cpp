#include<stdio.h>
int main()
{
	FILE *fptr1,*fptr2;
	char ch;
	
	fptr1=fopen("copy1.txt","a");
	while(ch=getc(fptr1)!=EOF)
	{
		fputc(ch,fptr1);
	}
	fclose(fptr1);
	
	fptr1=fopen("copy1.txt","r");
	fptr2=fopen("copy2.txt","a");
	
	while(ch=fgetc(fptr1)!=EOF)
	{
		while(ch=fgetc(fptr2)!=EOF)
		{
			fputc(ch,fptr2);
		}
	}
	while(ch=fgetc(fptr2)!=EOF)
	{
		printf("%c",ch);
	}
	return 0;
}
