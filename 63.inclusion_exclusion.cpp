#include<iostream>
using namespace std;

int divisible(int n,int a,int b){
	int  c1=n/a;
	int c2=n/b;
	
	int c3=n/(a*b);
	return c1+c2-c3;
}

int gcd(int a,int b){
	int temp=0;
	if(a>b){
		while(b != 0){
			temp=b;
			b=a%b;
			a=temp;
		}
	}
	else{
		while(a != 0){
			temp=a;
			a=b%a;
			b=temp;
		}
		
	}
	return temp;
}

int main(){
	int n,a,b;
	cin>>n>>a>>b;
	cout<<divisible(n,a,b)<<endl;
	cout<<gcd(a,b);
	
	return 0;
}
