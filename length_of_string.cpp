#include<stdio.h>
int main()
{
	int i=0,n=0;
	char a[20];
	printf("ENTER STRING:");
	gets(a);
	while(a[i]!='\0')
	{
		i++;
		n++;
	} 
	printf("LENGTH OF STRING IS:%d",n);
	return 0;
}
