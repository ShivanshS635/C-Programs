//NESTED SWITCHCASE AREA PERIMETER
#include<stdio.h>
int main()
{
	int choice,l,b,r,a1,a2,ch1,ch2;
	printf("\t\t\t\t\tAREA MENU");
	printf("\nRECTRANGLE");
	printf("\nCIRCLE");
	printf("\nENTER CHOICE:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
				 printf("\nENTER LENGTH:");
				 scanf("%d",&l);
				 printf("\nENTER BREADTH:");
				 scanf("%d",&b);
				 printf("\t\t\t\t\tRECTANGLE MENU");
				 printf("\n1.AREA");
				 printf("\n2.PERIMETER");
				 printf("\nENTER CHOICE:");
				 scanf("%d",&ch1);
				 switch(ch1)
				 {
				 	case 1:
				 			a1=l*b;
				 			printf("AREA------->%d",a1);
				 			break;
				 	case 2:
				 			a1=2*(l+b);
				 			printf("PERIMETER------->%d",a1);
				 			break;
				 	default:
				 			 printf("INVALID CHOICE.");
				 }
				 break;
		case 2:
				 printf("\nENTER RADIUS");
				 scanf("%d",&r);
				 printf("\t\t\t\t\CIRCLE MENU");
				 printf("\n1.AREA");
				 printf("\n2.CIRCUMFERENCE");
				 printf("\nENTER CHOICE:");
				 scanf("%d",&ch1);
				 switch(ch1)
				 {
				 	case 1:
				 			a2=3.14*r*r;
				 			printf("AREA------->%d",a2);
				 			break;
				 	case 2:
				 			a2=2*3.14*r;
				 			printf("CIRCUMFERENCE------->%d",a2);
				 			break;
				 	default:
				 			 printf("INVALID CHOICE.");
				 }
				 break;
		default:
				 printf("INVALID CHOICE.");
				 		
	}
	return 0;
}
