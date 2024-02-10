#include<stdio.h>
int main()
{
	int i=1,num,n,d,s=0;
	printf("ENTER NUMBER OF INPUTS:");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("ENTER NUMBER:");
		scanf("%d",&num);
		d=n%10;
		if(d==7)
		{
			s=s+num;
		}
		i++;
	}
	printf("%d IS THE SUM OF NUMBERS ENDING WITH 7.",s);
	return 0;
}
