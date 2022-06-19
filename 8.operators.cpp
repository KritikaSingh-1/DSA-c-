//operator in c++
#include<iostream>
using namespace std;
int main()
{
	//arithmetic operator
	//unary operator
	int i=1;
       //1    3	
	i=i++ + ++i;
	cout<<i<<endl;
	
	int j=2;
	int k=3;
	    //2 3 2     3       4     5
	int l=j+k+j++ + k++ + ++j + ++k;
	cout<<l<<endl;
	
	int m=0;
	  //0       0     1    1
	m = m++ - --m + ++m - m--;
	cout<<m<<endl;
	
	//relational operator
	int n;
	cin>>n;
	if(n>10){
		cout<<"more than 10"<<endl;
	}
	else{
		cout<<"less than 10"<<endl;
	}
	
	//logical operator
	int a;
	cin>>a;
	if(a%2==0 && a%3==0){
		cout<<"divisible by both"<<endl;
	}
	else if(a%2==0){
		cout<<"divisible by 2"<<endl;
	}
	else if(a%3==0){
		cout<<"divisible by 3"<<endl;
	}
	else{
		cout<<"divisible by none"<<endl;
	}
	
	//bitwise operator
	
	
	return 0;
}
