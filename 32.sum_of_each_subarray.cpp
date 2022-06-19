#include<iostream>
//sum of each subarray of the givn array
using namespace std;
int main(){
 	int n;
 	cin>>n;
 	int a[n];
 	int sum=0;

 	cout<<"enter the element in array:";
 	for(int i=0;i<n;i++){
 		cin>>a[i];
	 }
	 for(int i=0;i<n;i++){
	 	sum=0;
	 	for(int j=i;j<n;j++){
	 		sum=sum+a[j];
	 		cout<<sum<<endl;
	 		
		 }
	 }
	 
	 return 0;
}
	 
