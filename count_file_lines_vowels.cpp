#include<stdio.h>
int main()
{
	
	FILE *fptr;
	char ch;
	int n=0,s=0,v=0,c=0;
	fptr=fopen("file1.txt","a");
	printf("ENTER TEXT PRESS ^Z TO EXIT:");
	while((ch=getchar())!=EOF)
	{
		fputc(ch,fptr);
	}
	fclose(fptr);
	fptr=fopen("file1.txt","r");
	if(fptr==NULL)
	{
		printf("UNABLE TO OPEN FILE.....");
	}
	while((ch=fgetc(fptr))!=EOF)
	{
		printf("%c",ch);
		if((ch=='a')||(ch=='A')||(ch=='e')||(ch=='E')||(ch=='i')||(ch=='I')||(ch=='o')||(ch=='O')||(ch=='u')||(ch=='U'))
		{
			v=v+1;
		}
		else if(ch==' ')
		{
			s=s+1;
		}
		else if(ch=='\n') 
		{
			n=n+1;
		}
		else
		{
			c=c+1;
		}
	}
	printf("\nNUMBER OF LINES----->%d",n);
	printf("\nNUMBER OF SPACES----->%d",s);
	printf("\nNUMBER OF VOWELS----->%d",v);
	printf("\nNUMBER OF CONSONANTS----->%d",c);
	return 0;
	
}
