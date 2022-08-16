#include<iostream>
using namespace std;

class base{
	public:
		// virtual function is dynamically bind so at run time when it gives address it take the address and point the function
		virtual void print(){
			cout<<"this is base class print function"<<endl;
		}
		
		void display(){
			cout<<"this is base class display function"<<endl;
		}
};

class derived : public base{
	public:
		void print(){
			cout<<"this is derived class print function"<<endl;
		}
		
		void display(){
			cout<<"this is derived class display function"<<endl;
		}		
		
};

                                                                                            

int main(){
	base *baseptr;
	derived d;
	baseptr=&d;
	//-> this operator is use bacause it is a pointer object not normal object
	baseptr->display();
	baseptr->print();
	
	return 0;
}
