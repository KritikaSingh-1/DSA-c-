#include<iostream>
using namespace std;

class student{
	public:
	string name;
	int age;
	bool gender;
	
	void setName(string s){
		name=s;
	}
	
	void getname(){ //these getname and setname is mainly used for data member who is declared in private
	
		cout<<name<<endl;
	}
	
	void printInfo(){
		cout<<"name = ";
		cout<<name<<endl;
		cout<<"age = ";
		cout<<age<<endl;
		cout<<"gender = ";
		cout<<gender<<endl;
}
	
};


int main(){
	student a;
	a.name="kriti";
	a.age=20;
	a.gender=1;
	
	student arr[3];
	for(int i=0;i<3;i++){
		string s;
		cout<<"name = ";
		cin>>s;
		arr[i].setName(s);
		cout<<"age = ";
		cin>>arr[i].age;
		cout<<"gender = ";
		cin>>arr[i].gender;
	}
	for(int i=0;i<3;i++){
		arr[i].printInfo();
	}
	
	return 0;
}
