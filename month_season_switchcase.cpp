//MONSTH SEASONS SWITCHCASE
#include<stdio.h>
int main()
{
	int m;
	printf("ENTER MONTH:");
	scanf("%d",&m);
	switch(m)
	{
		case 12:
		case 1:
		case 2:
				 printf("WINTER.");
				 break;
		case 3:
		case 4:
		case 5:
				 printf("SPRING.");
				 break;
		case 6:
		case 7:
		case 8:
				 printf("SUMMER.");
				 break;
		case 9:
		case 10:
		case 11:
				 printf("AUTUMN.");
				 break;
		default:
				 printf("ENETR VALID MONTH NUMBER.");		
	}
	return 0;
}
