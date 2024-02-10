#include<stdio.h>
int main()
{
	int i;
	for(i=1900;i<=2023;i++)
	{
		if(i%4==0)
		{
			printf("\n%d IS A LEAP YEAR.",i);
		}
		else
		{
			printf("\n%d IS NOT A LEAP YEAR.",i);
		}
	}
	return 0;
}
