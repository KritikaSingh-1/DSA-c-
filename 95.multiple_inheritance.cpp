#include<iostream>
using namespace std;
class A{
	int c;
	public:
		int a;
		void func1(){
			cout<<"func1"<<endl;
		}
};

class B{
	int b;
	public:
		void func2(){
			cout<<"fun2"<<endl;
		}
};

class C : public A , public B{
	public:
		
};

int main(){
	C x;
	x.a;
	x.func1();
	x.func2();
	
	return 0;
}
