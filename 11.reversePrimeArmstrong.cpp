#include<iostream>
#include<cmath>
using namespace std;
int main(){
	//prime number or not
	int n;
	cin>>n;
	bool  flag=0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			cout<<"non prime"<<endl;
			flag=1;
			break;
		}
		
	}
	if(flag==0){
		cout<<"prime"<<endl;
	}
	
	//reverse of a number
	int a;
	cin>>a;
	int r;
	int reverse=0;
	while(a>0){
		r=a%10;
		reverse=reverse*10+r;
		a=a/10;
	}
	cout<<reverse<<endl;
	
	//armstrong number are those whose sum of cube of digits get the same number 
	//ex: 153=1^3 + 5^3 + 3^3
	int b;
	cin>>b;
	int original =b;
	int armstrong =0;
	while(b>0){
		int remain = b%10;
		armstrong+= pow(remain,3);
		b=b/10;
	}
	if(armstrong==original){
		cout<<"the number is armstrong number";
	}
	else{
		cout<<"not armstrong";
	}
	return 0;
}
