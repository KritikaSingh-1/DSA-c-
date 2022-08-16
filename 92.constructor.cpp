#include<iostream>
using namespace std;
class student{
	public:
	string name;
	int age;
	//default constructor
	student(){
		cout<<"default constructor"<<endl;
	}
	
	//parameterized constructor with one parameter
	student(string s){
		name=s;
	}
	
	//parameterized constructor with two parameter
	student(string s,int ag){
		name=s;
		age=ag;
	}
	
	//copy constructor
	student(student &a1){
		cout<<"copy constructor"<<endl;
		name=a1.name;
		age=a1.age;
		
	}
	
	//destructor is called after main end
	~student(){
		cout<<"destructor called"<<endl;
	}
	
	void printInfo(){
		cout<<"name = ";
		cout<<name<<endl;
		cout<<"age = ";
		cout<<age<<endl;
		
    }

	void getname(){
		cout<<name<<endl;
	}
	
//	operator overloading use if we want to compare two object

     bool operator==(student &a){
     	if(name==a.name && age==a.age){
     		return true;
		 }
		 return false;
	 }
};

int main(){
	student a1("uruvi");
	student a2("uruvi",20);
	a1.getname();
	a2.printInfo();
	student b;
	student c=a1;
	
	if(c==a1){
		cout<<"same"<<endl;
	}
	else{
		cout<<"not same"<<endl;
	}
	return 0;
}
