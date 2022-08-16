//pointer and arrays
#include<iostream>
using namespace std;
int main(){
	int a=10;
	int*aptr=&a;
	cout<<*aptr<<endl;
    cout<<aptr<<endl;
    int arr[]={10,20,30};
    cout<<*arr<<endl;
    
    int *ptr=arr;
    for(int i=0;i<3;i++){
    	cout<<*ptr<<endl;
    	ptr++;
	}
	
     for(int i=0;i<3;i++){
    	cout<<*(arr+i)/*it goes on next index not addrss that's why we use+i not 4i*/<<endl;
	}
	//pointer to pointer
	int b=12;
	int*p;
	p=&b;
	cout<<*p<<endl;
	int**q=&p;
	cout<<q<<endl;
	cout<<*q<<endl;
	cout<<**q<<endl;	
    
	return 0;
}
