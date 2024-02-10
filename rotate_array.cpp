#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a[5]={10,20,30,40,50};
	int n=5;
	int k=3;
	rotate(a,k,n);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
