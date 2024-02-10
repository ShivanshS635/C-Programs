#include<stdio.h>
int main()
{
	char a[20];
	int i;
	printf("ENTER STRING:");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		a[i]=a[i]+32;
	}
	printf("%s",a);
	return 0;
}
