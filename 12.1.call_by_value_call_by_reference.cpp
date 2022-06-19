#include<iostream>
using namespace std;

void sum(int a,int b){
	int c=a+b;
	cout<<"sum by call by value method:"<<c<<endl;
}

void swap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;

}

void swap1(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;

}

int main(){
	int x=10,y=20;
	int m=5,n=6;
	sum(x,y);
	swap(x,y);
		cout<<"swap by call by reference using reference variable:"<<x<<" "<<y<<endl;
	swap1(&m,&n);
		cout<<"swap by call by reference using pointer:"<<m<<" "<<n<<endl;
	return 0;
}
