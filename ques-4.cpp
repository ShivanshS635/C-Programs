#include<stdio.h>

union data{
	int i;
	float f;
	char c;
};

int main()
{
	int ch;
	union data d;
	
	printf("\n1---->INT\n2---->FLOAT\n3---->CHAR\n4---->EXIT\nENTER YOUR CHOICE:");
	scanf("%d",&ch);
	
	while(ch!=4)
	{
		switch(ch)
		{
			case 1:
				{
					printf("\nENTER INTEGER VALUE:");
					scanf("%d",&d.i);
					printf("\nENTERED VALUE---->%d",d.i);
				}
				break;
			case 2:
				{
					printf("\nENTER FLOAT VALUE:");
					scanf("%f",&d.f);
					printf("\nENTERED VALUE---->%f",d.f);
				}
				break;
			case 3:
				{
					printf("\nENTER CHARACTER VALUE:");
					fflush(stdin);
					scanf("%c",&d.c);
					printf("\nENTERED VALUE---->%c",d.c);
				}
		}
		printf("\n1---->INT\n2---->FLOAT\n3---->CHAR\n4---->EXIT\nENTER YOUR CHOICE:");
		scanf("%d",&ch);
	}
	
	return 0;
}
