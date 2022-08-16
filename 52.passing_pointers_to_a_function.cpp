//passing pointers to a function
#include<iostream>
using namespace std;
void increment(int a){
	a++;
}
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
	
}
int main(){
	int a=10;
	int b=4;
	int *aptr=&a;
	int *bptr=&b;
	
	increment(a);
	cout<<a<<endl;//here value of a remain same bcoz in function we pass the value not variable for this we use pointer

	swap(aptr,bptr);
	cout<<a<<" "<<b<<endl;
	
	return 0;
}
