#include<stdio.h>
int main()
{
	char a[20];
	int i;
	printf("ENTER STRING:");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if((a[i]>='a')&&(a[i]<='z'))
		{
			a[i]=a[i]-32;
		}
		else
		{
			a[i]=a[i]+32;
		}
	}
	printf("STRING IS:%s",a);
	return 0;
}
