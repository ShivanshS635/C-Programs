//GREET ACCORDING TO GENDER
#include<stdio.h>
int main()
{
	char g;
	printf("ENTER YOUR GENDER:");
	scanf("%c",&g);
	if(g=="m")
	{
		printf("HELLO MA'AM");
	}
	else
	{
		printf("HELLO SIR");
	}
	return 0;
}
