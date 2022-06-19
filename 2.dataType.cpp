#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a=12;
	double b=3.14159;
	char c='a';
	bool d= true;
	short int si;
	long int li;
	
	cout<<"size of int:"<<sizeof(a)<<endl;
	
	cout<<"size of double:"<<sizeof(b)<<endl;
	cout<<"size of char:"<<sizeof(c)<<endl;
	cout<<"size of bool:"<<sizeof(d)<<endl;
	cout<<"size of short int:"<<sizeof(si)<<endl;
	cout<<"size of long int:"<<sizeof(li)<<endl;
	cout<<setprecision(9)<<b<<endl;
	return 0;
}
