//Prime Or Not..
#include<stdio.h>
#include<math.h>
int main()
{
	int n,ctr=0,i;
	printf("ENTER NUMBER:");
	scanf("%d",&n);
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			ctr=1;
			break;
		}
		else
		{
			ctr=0;
		}
	}
	if(ctr==0)
	{
		printf("%d IS A PRIME NUMBER.",n);
	}
	else
	{
		printf("%d IS NOT A PRIME NUMBER.",n);
	}
	return 0;
}
