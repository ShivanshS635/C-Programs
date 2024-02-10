//NUMBER OF DAYS NESTED SWITCHCASE
#include<stdio.h>
int main()
{
	int m,y;
	printf("ENTER MONTH NUMBER AND YEAR:");
	scanf("%d %d",&m,&y);
	switch(m)
	{
		case 4:
		case 6:
		case 9:
		case 11:
				 printf("NUMBER OF DAYS---->30");
				 break;
		case 2:switch(y%100)
				{
					case 0:
							 switch(y%400)
							 {
							 	case 0:
							 			 printf("NUMBER OF DAYS---->29");
							 			 break;
								
					default:
							 printf("NUMBER OF DAYS---->28");
							 break;
				}
				break;
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
				 printf("NUMBER OF DAYS---->31");
				 break;
		default:
				 printf("ENTER VALID MONTH NUMBER.");		
	}
	return 0;
}
