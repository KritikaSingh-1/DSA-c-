#include<iostream>
using namespace std;
int main(){
	char a[100];
	cin>>a;
	cout<<a<<endl;
	cout<<a[3]<<endl;
	
	char arr[100]="apple";
	int i=0;
	while(arr[i]!='\0'){
		cout<<arr[i]<<endl;
		i++;
	}	
	
	return 0;
}
