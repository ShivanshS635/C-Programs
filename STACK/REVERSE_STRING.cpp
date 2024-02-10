#include<iostream>
#include<strings.h>
using namespace std;
int top=-1;
char* stack;
int n;

void push(char x)
{
	if(top==n-1)
	{
		cout<<"STACK OVERFLOW\n";
	}
	top++;
	stack[top]=x;
}

void pop()
{
	if(top==-1)
	{
		cout<<"STACK UNDERFLOW\n";
	}
	char x=stack[top];
	top--;
	cout<<x;
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
		cout<<stack[i]<<" ";
	}
	cout<<'\n';
}

int main()
{	
	char a[100];
	cout<<"ENTER NUMBER OFF ELEEMNT IN STACK:";
	cin>>n;
	fflush(stdin);
	gets(a);
	stack=new char[n];
	
	for(int i=0;i<n;i++)
	{
		push(a[i]);
	}
	for(int i=0;i<n;i++)
	{
		pop();
	}
	
	delete [] stack;
	return 0;
}
