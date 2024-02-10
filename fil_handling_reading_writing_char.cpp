#include<stdio.h>
int main()
{
	FILE *fptr;
	char ch;
	fptr=fopen("Poem.txt","w");
	printf("ENTER THE SENTANCE AND PRESS ^Z TO EXIT...\n");
	while((ch=getchar())!=EOF)
	{
		fputc(ch,fptr);
	}
	fclose(fptr);
	
	fptr=fopen("Poem.txt","r");
	printf("\nTHE ENTERED TEXT\n");
	while((ch=getc(fptr))!=EOF)
	{
		printf("%c",ch);
	}
	return 0;
}
