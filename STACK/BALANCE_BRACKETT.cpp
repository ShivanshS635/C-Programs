#include<iostream>
#include<strings.h>
using namespace std;
int top=-1;
char* stack1;
int n;

void push(char x)
{
	if(top==n-1)
	{
		cout<<"STACK OVERFLOW\n";
	}
	top++;
	stack1[top]=x;
}

char pop()
{
	if(top==-1)
	{
		return ' ';
	}
	char x=stack1[top];
	top--;
	return x;
}

void display()
{
	cout<<"STACK ELEMENTS:";
	if(top==-1)
	{
		cout<<"STACK UNDERFLOW\n";
	}
	for(int i=top;i>=0;i--)
	{
		cout<<stack1[i]<<" ";
	}
	cout<<'\n';
}

int main()
{	
	char stack2[100];
	cout<<"ENTER NUMBER OFF ELEEMNT IN STACK:";
	cin>>n;
	fflush(stdin);
	gets(stack2);
	stack1=new char[n];
	
	for(int i=0;stack2[i]!='\0';i++)
	{
		if(stack2[i]=='{'||stack2[i]=='['||stack2[i]=='(')
		{
			push(stack2[i]);
		}
		else if(stack2[i]=='}'||stack2[i]==']'||stack2[i]==')')
		{
			char ch=pop();
			if(ch==' ')
			{
				cout<<"OPENING BRACKETT MISSING.\n";
				return 0;
			}
			else
			{
				if(!((stack2[i]=='}'&&ch=='{')||(stack2[i]==']'&&ch=='[')||(stack2[i]==')'&&ch=='(')))
				{
					cout<<"BRACKETTS NOT WELL FORMED.\n";
					return 0;
				}
			}
			
		}
	}
	
	if(top!=-1)
	{
		cout<<"CLOSING BRACKETT IS MISSING.\n";	
		return 0;
	}
	
	cout<<"BRACKETTS WELL FORMED :)";
	
	delete [] stack1;
	return 0;
}
