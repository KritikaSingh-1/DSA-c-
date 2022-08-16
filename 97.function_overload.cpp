#include<iostream>
using namespace std;

class funcOverload{
	public:
		void fun(){
			cout<<"i am a function with no argument"<<endl;
		}
		
		void fun(int x){
			cout<<"i am a function with int argument"<<endl;
		}
		
		void fun(double x){
			cout<<"i am a function with double argument"<<endl;
		}
};

int main(){
	funcOverload obj;
	obj.fun();
	obj.fun(4);
	obj.fun(6.2);
	return 0;
}
