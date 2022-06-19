#include<iostream>
using namespace std;
int main()
{
	int pocketmoney= 3000;
	for(int date=1;date<=30;date++)
	{
		if(date%2==0){
			continue;
		}
		if(pocketmoney==0)
		{
			break;
		}
		cout<<"go out today"<<endl;
		pocketmoney=pocketmoney-300;
		
	}
	//second
	for(int i=1;i<100;i++)
	{
		if(i%3==0){
			continue;
		}
		cout<<i<<endl;
	}
	//prime number
	int n;
	cin>>n;
	int count=0;
	int i;
	for(i = 1;i<=n;i++){
		if(n%i==0){
			cout<<"not prime";
			break;
		}
	}
	if(i==n){
		cout<<"prime"<<endl;
	}
	
}
