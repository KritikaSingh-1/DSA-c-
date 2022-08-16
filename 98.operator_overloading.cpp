#include<iostream>
using namespace std;

class count{
	public:	
	int value;
	void operator ++ (){
		++value;
	}
	void operator ++ (int){
		value++;
	}
};

int main(){
    count c1;
    c1.value = 5;
    ++c1;
    cout<<"before increment:"<<c1.value<<endl;
    c1++;
    cout<<"after increment:"<<c1.value<<endl;
    return 0;
}
