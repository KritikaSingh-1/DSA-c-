#include<iostream>
using namespace std;
class A{
	int c;
	public:
		int a;
		void func1(){
			cout<<"inherited"<<endl;
		}
};

class B:public A{
	int b;
	public:
		void func2(){
			cout<<"parents";
		}
};

int main(){
	B x;
	x.a;
	x.func1();
	x.func2();
	//x.c;
	//x.b;
	return 0;
}
