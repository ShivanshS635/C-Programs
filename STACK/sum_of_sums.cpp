#include<iostream>
using namespace std;

int sum(int n)
{
	int num=0;
	while(n!=0)
	{
		int d=n%10;
		num=num*10+d;
		n=n/10;
	}
	if(num>=0&&num<=9)
	{
		return num;
	}
	else{
		while(num!=0)
		{
			int d=num%10;
			num=num/10;
			return d+sum(num);
		}
	}
}

int main()
{
	int n;
	cout<<"ENTER NUMBER:";
	cin>>n;
	cout<<sum(n);
}
