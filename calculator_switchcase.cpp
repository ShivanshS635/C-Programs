//CALCULATOR SWITCHCASE
#include<stdio.h>
int main()
{
	char ch;
	int a,b,c;
	printf("\t\t\t\t\t\t\tCALCULATOR");
	printf("\n+  ------>   ADDITION");
	printf("\n-  ------>   SUBTRACTION");
	printf("\n*  ------>   MULTIPLICAION");
	printf("\n/  ------>   DIVISION");
	printf("\nENTER CHOICE:");
	scanf("%c",&ch);
	printf("ENTER BOTH NUMBERS:");
	scanf("%d %d",&a,&b);
	switch(ch)
	{
		case '+':c=a+b;
				 printf("%d",c);
				 break;
		case '-':if(a>b)
				 {
				 	c=a-b;
				 	printf("%d",c);
			     }
				 else
				 {
				 	c=b-a;
				 	printf("%d",c);
				 }
				 break;
		case '*':c=a*b;
				 printf("%d",c);
				 break;
		case '/':c=a/b;
				 printf("%d",c);
				 break;
		default :printf("WRONG CHOICE.");
	}
	return 0;
}
