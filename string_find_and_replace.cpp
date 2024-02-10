#include<stdio.h>
int main()
{
	char f,r,a[20];
	int i;
	printf("ENTER STRING:");
	gets(a);
	printf("ENTER CHARACTER TO FIND:");
	scanf("%c",&f);
	printf("ENTER CHARACTER TO REPLACE WITH:");
	fflush(stdin);
	scanf("%c",&r);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==f)
		{
			a[i]=r;
		}
	}
	printf("\nTHE STRING IS:");
	printf("%s",a);
	return 0;
}
