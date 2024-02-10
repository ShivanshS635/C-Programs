#include<stdio.h>
#include<string.h>
int main()
{
	char a[5][20],temp[20];
	int i,j,n=5;
	printf("ENTER 5 CITIES:");
	for(i=0;i<5;i++)
	{
		gets(a[i]);
	}
	printf("\nSTRING BEFORE SORT");
	for(i=0;i<5;i++)
	{
		printf("%s ",a[i]);
	}
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(strcmp(a[j],a[j+1])>0)
			{
				strcpy(temp,a[j]);
				strcpy(a[j],a[j+1]);
				strcpy(a[j+1],temp);
			}
		}
	}
	printf("\nSTRING AFTER SORT:");
	for(i=0;i<5;i++)
	{
		printf("%s ",a[i]);
	}
	return 0;
}
