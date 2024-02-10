//INSAURANCE
#include<stdio.h>
int main()
{
	char m,g;
	int a;
	printf("ENTER YOUR MARITAL STATUS:");
	scanf("%c",&m);
	if(m=='U'||m=='u')
	{
		printf("ENTER YOUR AGE:");
		scanf("%d",&a);
		fflush(stdin);
		printf("ENTER YOUR GENDER:");
		scanf("%c",&g);
		if(g=='m'||g=='M')
		{
			if(a>25)
			{
				printf("CAN BE INSURED.");
			}
			else
			{
				printf("CAN'T BE INSURED.");
			}
			
		}
		else
		{
			if(a>35)
			{
				printf("CAN BE INSURED.");
			}
			else
			{
				printf("CAN'T BE INSURED.");
			}
		}
	}
	else
	{
		printf("CAN BE INSURED.");
	}	
	return 0;
}
