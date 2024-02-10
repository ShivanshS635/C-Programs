#include<stdio.h>
#include<string.h>
int main()
{
	char a[50][20],temp[20],f[20],r[20];
	int i,j,n;
	printf("ENTER NUMBER OF STRINGS YOU HAVE TO ADD:");
	scanf("%d",&n);
	printf("ENTER SENTANCE:");
	for(i=0;i<n;i++)
	{
		gets(a[i]);
	}
	printf("STRING:");
	for(i=0;i<n;i++)
	{
		printf("%s ",a[i]);
	}
	printf("\nENTER STRING TO REPLACE:");
	gets(f);
	printf("\nENTER STRING TO REPLACE WITH:");
	gets(r);
	fflush(stdin);
	for(i=0;i<n;i++)
	{
		if(strcmp(a[i],f)==0)
		{
			strcpy(a[i],r);
		}
	}
	printf("STRING:");
	fflush(stdin);
	for(i=0;i<n;i++)
	{
		printf("%s ",a[i]);
	}
	return 0;
}

