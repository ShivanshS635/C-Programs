#include<stdio.h>
int main()
{
	char a[20],b[20],c[20];
	int i,j;
	printf("ENTER 1ST STRING:");
	gets(a);
	printf("ENTER 2ND STRING:");
	gets(b);
	for(i=0;a[i]!='\0';i++)
	{
		c[i]=a[i];
	}
	for(j=0;b[j]!='\0';j++)
	{
		c[j+i]=b[j];
	}
	printf("CONCATENATED STRING:%s",c);
	return 0;
}
