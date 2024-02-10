#include<stdio.h>
#include<strings.h >

char st[20];
int top=-1;

void push(char c)
{
	top++;
	st[top]=c;
}

char pop()
{
	char c=st[top];
	top--;
	return c;
}

int main()
{
	char exp[20],exp1[20];
	char *e;
	int n1,n2,n3,num;
	
	fflush(stdin);
	gets(exp);
	strcpy(exp1,exp);
	strrev(exp1);
	e=exp1;
	
	while(*e!='\0')
	{
		if(*e>='0'&&*e<='9')
		{
			num=*e-48;
			push(num);
		}
		else
		{
			n1=pop();
			n2=pop();
			switch(*e)
			{
				case '+':n3=n1+n2;
						 break;
				case '-':n3=n1-n2;
						 break;
				case '*':n3=n1*n2;
						 break;
				case '/':n3=n1/n2;
						 break;
			}
			push(n3);
		}
		e++;
	}
	printf("\nThe result of expression %s  =  %d\n\n",exp,pop());
	
	return 0;
}
