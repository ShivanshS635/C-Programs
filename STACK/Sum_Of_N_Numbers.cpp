#include<iostream>
using namespace std;

int main()
{
	int n,a,sum=0;
	cout<<"ENTER NUMBER OF INPUTS:";
	cin>>n;
	int i;
	for(i=0;i<n;i++)
	{
		cin>>a;
		sum+=a;
	}
	cout<<"Sum Of Entered Number---->"<<sum;
	return 0;
}
