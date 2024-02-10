#include<stdio.h>
int main()
{
	char a[20];
	int j,i,sp=0;
	printf("ENTER STRING:");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		{
			for(j=0;a[j]!='\0';j++)
			{
				if(a[i+j+1]==' ')
				{
					a[i+j+1]=a[i+j+1]+'\b';//shifting
				}
				else
				{
					break;
				}
			}
		}
	}
	printf("STRING:%s",a);
	return 0;
}
