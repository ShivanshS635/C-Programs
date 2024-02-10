#include<stdio.h>
int main()
{
	char a[20];
	int i;
	printf("ENTER STRING:");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[0]>='a'&&a[0]<='z')
		{
			a[0]=a[0]-32;
		}
		else if(a[i]==' ')
		{
			if(a[i+1]>='a'&&a[i+1]<='z')
			{
				a[i+1]=a[i+1]-32;
			}
		}
	}
	printf("\nSTRING IS:%s",a);
	return 0;
}
