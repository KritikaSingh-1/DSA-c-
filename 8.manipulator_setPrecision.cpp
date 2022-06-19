 #include<iostream>
 #include<iomanip>
 using namespace std;
 int main(){
 	int a=3;
 	float b=17.34f;
 	double c=13.345;
 	cout<<"the value without setw is:"<<a<<endl;
 	cout<<"the value without setw is:"<<b<<endl;
 	cout<<"the value without setw is:"<<c<<endl;
 	//endl and setw are manipulator
 	cout<<"the value with setw is:"<<setw(4)<<a<<endl;
 	cout<<"the value with setw is:"<<setw(4)<<b<<endl;
 	cout<<"the value with setw is:"<<setw(4)<<c<<endl;
 	
 	cout<<setprecision(5)<<c<<endl;
 	cout<<setprecision(2)<<c<<endl;
 	cout<<fixed<<setprecision(5)<<c<<endl;
 	return 0;
 }
