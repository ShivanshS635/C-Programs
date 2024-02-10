#include<stdio.h>
int main()
{
	int i,n,num,e=0,o=0;
	printf("ENTER NUMBER OF INPUTS:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\nENTER NUMBER:");
		scanf("%d",&num);
		if(num%2==0)
		{
			e++;
		}
		else
		{
			o++;
		}
	}
	printf("\nNUMBER OF EVEN NUMBERS:%d",e);
	printf("\nNUMBER OF ODD NUMBERS:%d",o);
	return 0;
}
