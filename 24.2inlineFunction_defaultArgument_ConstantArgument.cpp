#include<iostream>
using namespace std;

inline int product(int a,int b){
	return a*b;
}

int sum(int w=0,int x=3,int y=1,int z=2){//default argument
	return w+x+y+z;
}

int sum2(const int x=3){
	//it gives error x=x+2; 
	return x;
}

int main(){
	//it reduce the time and space of calling the function again and again and only once the function is called it copy the ans at the compile time 
	int a,b,c,d;
	cout<<"Enter the value of a and b:"<<endl;
	cin>>a>>b;
	cout<<"the sum of a and b is:"<<product(a,b)<<endl;
	cout<<"the sum of a and b is:"<<product(a,b)<<endl;
	cout<<"the sum of a and b is:"<<product(a,b)<<endl;
	cout<<"the sum of a and b is:"<<product(a,b)<<endl;
	cout<<"the sum of a and b is:"<<product(a,b)<<endl;
	
	cin>>c>>d;
	cout<<sum(a,b,c,d)<<endl;
	cout<<sum(a,b,c)<<endl;
	cout<<sum(b,c)<<endl;
	cout<<sum2()<<endl;
	
	
	return 0;
}
