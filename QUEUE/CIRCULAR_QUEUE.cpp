#include<iostream>
using namespace std;

int n;
int * q;
int f=-1,r=-1;

void enqueue(int x){
	if(f==-1&&r==-1){
		f=0;
		r=0;
		q[r]=x;
	}
	else if(f==(r+1)%n){
		cout<<"QUEUE OVERFLOW...";
	}
	r=(r+1)%n;
	q[r]=x;
}

int dequeue(){
	if(f==-1&&r==-1){
		cout<<"QUEUE UNDERFLOW...";
	}
	else if(f==r){
		return q[f];
		f=0;
		r=0;
	}
	return q[f];
	f=(f+1)%n;
}

void display(){
	int i=f;
	if(f==-1&&r==-1){
		cout<<"QUEUE UNDERFLOW...";
	}
	else{
		cout<<"-----QUEUE ELEMENTS ARE-----\n";
		for(i=f;i<=r;i++){
			cout<<q[i]<<" ";
		}
	}
}

int main(){
	cout<<"ENTER SIZE OF QUEUE:";
	cin>>n;
	int a;
	q=new int[n];
	int ch;
	do{
		cout<<"1->ENQUEUE\n2->DEQUEUE\n3->DISPLAY\n4->EXIT\nENTER YOUR CHOICE:";
		cin>>ch;
		switch(ch){
		case(1):cout<<"ENTER THE ELEMENT:";
				cin>>a;
				enqueue(a);
				break;
		case(2):cout<<"POPPED ELEMENT---->";
				cout<<dequeue()<<endl;
				break;
		case(3):display();
				break;
		default:return 0;
		}
	}while(ch!=4);
	
	return 0;
}
