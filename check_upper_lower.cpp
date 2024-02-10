//CHECK UPPER/LOWER/NUMBER/SPACE/SPECIAL CHARACTER
#include<stdio.h>
int main()
{
	char a;
	printf("ENTER:");
	scanf("%c",&a);
	if(a>='A' && a<='Z')
	{
		printf("UPPERCASE");
	}
	else if(a>='a' && a<='z')
	{
		printf("LOWERCASE");
	}
	else if(a>='0' && a<='9')
	{
		printf("NUMBER");
	}
	else if(a==' ')
	{
		printf("SPACE");
	}
	else
	{
		printf("SPECIAL CHARACTER");
	}
	return 0;
}
