#include<iostream>
using namespace std;

void move(char a[],int n)
{
	int x=0,y=0,ch;
	for(int i=0;i<n;i++)
	{
		if(a[i]=='u')
		{
			y++;
		}
		else if(a[i]=='d')
		{
			y--;
		}
		else if(a[i]=='r')
		{
			x++;
		}
		else
		{
			x--;
		}
	}
	cout<<"("<<x<<","<<y<<")"<<" IS YOUR CURRENT POSITION.";

}

int main()
{
	int n;
	char a[100];
	
	cout<<"ENTER NUMBER OF STEPS:";
	cin>>n;
	
	cout<<"ENTER STEPS..";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	move(a,n);
}
