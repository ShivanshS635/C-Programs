#include<iostream>
using namespace std;

int n;
int f=-1,r=-1;
int *queue;

void enqueue(int x){
	if(r==n-1){
		cout<<"QUEUE IS FULL...\n";
	}
	else{
		if(f==-1&&r==-1){
			f==0;
			r==0;
			queue[f]=x;
		}
		else{
			f=f+1;
			queue[f]=x;
		}	
	}
}

int dequeue(){
	int x;
	if(f==-1&&r==-1){
		cout<<"QUEUE IS EMPTY...";
	}
	else{
		x=queue[f];
		f++;
	}
	return x;
}

void display()
{
	if(f==-1&&r==-1){
		cout<<"QUEUE IS EMPTY...";
	}
	for(int i=f;i<=r;i++)
	{
		cout<<queue[i]<<" ";
		cout<<'\n';
	}
}

int main()
{
	cout<<"ENTER SIZE OF QUEUE:";
	cin>>n;
	int a;
	queue=new int[n];
	for(int i=0;i<n;i++)
	{
		cout<<"ENTER NUMBER TO INSERT:";
		cin>>a;
		enqueue(a);
	}
	display();
	for(int i=0;i<n;i++)
	{
		dequeue();
		display();
	}
	return 0;
}
