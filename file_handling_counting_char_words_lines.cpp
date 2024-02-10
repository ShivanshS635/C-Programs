#include<stdio.h>
int main()
{
	FILE *fptr;
	char ch;
	int chr=0,w=0,l=0;
	
	/*writing*/
	
	fptr=fopen("count.txt","a");
	if(fptr==NULL)
	{
		printf("UNABLE TO OPEN FILE..\n");
		return 0;
	}
	printf("ENTER THE TEXT AND PRESS ^Z TO EXIT....\n");
	while(ch=getchar()!=EOF)
	{
		fputc(ch,fptr);
	}
	fclose(fptr);
	
	/*reading*/
	
	fptr=fopen("count.txt","r");
	if(fptr==NULL)
	{
		printf("UNABLE TO OPEN FILE..\n");
		return 0;
	}
	printf("ENTERED TEXT IS....\n");
	while(ch=fgetc(fptr)!=EOF)
	{
		printf("%c",ch);
	}
	while(ch=getc(fptr)!=EOF)
	{
		chr=chr+1;
		while(ch=getc(fptr)!=32)
		{
			w=w+1;
		}
		while(ch=getc(fptr)!=10)
		{
			l=l+1;
		}
	}
	printf("\nNUMBER OF CHARACTERS:%d",chr);
	printf("\nNUMBER OF WORDS:%d",w);
	printf("\nNUMBER OF LINES:%d",l);
	return 0;
}
