#include<stdip.h>
int main()
{
	int i;
	for(i=1900;i<=2023;i++)
	{
		if((i%100==0&&i%400==0)||i%4==0)
		{
			printf("%d IS A LEAP YEAR.",i);
		}
		else
		{
			printf("%d IS NOT A LEAP YEAR.",i);
		}
	}
	return 0;
}
