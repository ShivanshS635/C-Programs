#include<stdio.h>
int main()
{
	int i,j;
	for(i='A';i<='E';i+=2)
	{
		for(j='A';j<=i;j++)
		{
			printf("%c",j);
		}
		printf("\n");
	}
	return 0;
}
