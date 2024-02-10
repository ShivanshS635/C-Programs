#include<stdio.h>
#include<string.h>

int n,top=-1;
char st[80];

void push(char c)
{
	if(top==79)
	{
		printf("\nOverflow");
		return;
	}
	top++;
	st[top]=c;
}

char pop()
{
	if(top==-1)
	{
		printf("\nUnderflow");
		return ' ';
	}
	char item=st[top];
	top--;
	return item;
}

int main()
{
	char exp[80];
	int i;	
	printf("ENTER EXPRESSION:");
	fflush(stdin);
	gets(exp);
	
	for(i=0;exp[i]!='\0';i++)
	{
		if(exp[i]=='['||exp[i]=='{'||exp[i]=='(')
		{
			push(exp[i]);
		}
		else if(exp[i]==']'||exp[i]=='}'||exp[i]==')')
		{
			char ch;
			ch=pop();
			if(ch==' ')
			{
				printf("\nOpening brackett missing");
				return 0;
			}
			else
			{
				if (!((ch == '[' && exp[i] == ']') || (ch == '{' && exp[i] == '}') || (ch == '(' && exp[i] == ')')))
				{					
					printf("\nNot Well Formed");
					return 0;
				}
			}
		}
	}
	
	if(top!=-1){
		printf("\nClosing Brackett Missing");
		return 0;
	}
	
	printf("\nWell Formed");
	
	return 0;
}
