//AREA SWITCHCASE
#include<stdio.h>
int main()
{
	int ch,l,b,r;
	float a;
	printf("\t\t\t\t\tAREA MENU");
	printf("\n1.AREA OF RECTANGLE");
	printf("\n2.AREA OF CIRCLE");
	printf("\nENTER YOUR CHOICE:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1 :printf("ENTER LENGTH:");
				scanf("%d",&l);
				printf("ENTER BREADTH:");
				scanf("%d",&b);
				a=l*b;
				printf("AREA OF RECTANGLE IS %f:",a);
				break;
		case 2 :printf("ENTER RADIUS:");
				scanf("%d",&r);
				a=3.14*r*r;
				printf("AREA OF CIRCLE IS %f:",a);
				break;
		default : printf("WRONG CHOICE");
	}
	return 0;
}
