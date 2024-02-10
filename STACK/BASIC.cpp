#include<iostream>
using namespace std;
int top=-1;
int* stack;
int n;

void push(int x)
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
	int x=stack[top];
	top--;
	cout<<x<<'\n';
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
	int a;
	cout<<"ENTER NUMBER OFF ELEEMNT IN STACK:";
	cin>>n;
	stack=new int[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>a;
		push(a);
	}
	display();
	for(int i=0;i<n;i++)
	{
		
		pop();
		display();
	}
	
	delete [] stack;
	return 0;
}
