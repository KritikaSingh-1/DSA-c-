#include<iostream>
using namespace std;

typedef struct employee{
	int eId;
	char favChar;
	float salary;
}ep;
//typedef is a keyword used to create short cut 

union money{
	int rice;
	char car;
	float pounds;
};

enum Meal{breakfast,lunch,dinner};
	Meal m1 = breakfast;
	Meal m2 = lunch;
	Meal m3 = dinner;


int main(){
	
	cout<<m1<<endl;
	cout<<m2<<endl;
	cout<<m3<<endl;
	cout<<breakfast<<endl;
	cout<<lunch<<endl;
	cout<<dinner<<endl;
	
	
	
/*	union money m1;
	m1.rice=34;
	m1.car='c';
	//after defining value of car it gives garbage value but the value of car is correct
	m1.pounds=3.14;
	 cout << "The first value at the allocated momery : "<< m1.rice << endl;
     cout << "The next value store after removing the prevous value : "<< m1.car << endl;
     cout << "The Final value value at the same allocated memeory space : "<< m1.pounds << endl;*/
	
/*	ep kritika;
	kritika.eId=1;
	kritika.favChar = 'c';
	struct employee kritik;
	kritik.salary=120000;
	
	cout<<kritika.eId<<endl;
	cout<<kritika.favChar<<endl;
	cout<<kritik.salary<<endl;*/
	
	return 0;
}
