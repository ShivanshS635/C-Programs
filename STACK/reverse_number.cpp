#include<iostream>
using namespace std;

int main()
{
	int n,a,sum=0,digit=0;
	cout<<"ENTER NUMBER:";
	cin>>n;
	int i;
	while(n!=0){
		digit=n%10;
		sum=sum*10+digit;
		n=n/10;
	}
	
	cout<<sum;
	return 0;
}
