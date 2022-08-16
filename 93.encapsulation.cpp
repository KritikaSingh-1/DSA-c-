#include<iostream>
using namespace std;
class A{
	public:
		int a;
		void funcA(){
			cout<<"func A\n";
		}
		
	private:
		int b;
		void funcB(){
			cout<<"funcB\n";
		}
		
	protected:
	int c;
	void funcC(){
		cout<<"func C\n";
	}
		
};

int main(){
	A obj;
	obj.funcA();
	obj.a=2;
//public can call inside the class by declaring get and set function	
//	A obj1;
//	obj1.funcB();

//protected can call with different method by inheritence
//	A obj2;
//	obj2.funcC();
	return 0;
}
