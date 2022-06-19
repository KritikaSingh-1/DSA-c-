#include<iostream>
//non decreasing find all maximum till all max i
using namespace std;
 int main(){
 	int n;
 	cin>>n;
 	int arr[n];
 	int maxi=-19999;
 	cout<<"enter the element in array:";
 	for(int i=0;i<n;i++){
 		cin>>arr[i];
	 }
 	
 	for(int i=0;i<n;i++){
 		maxi = max(maxi,arr[i]);
 		cout<< maxi <<endl;
	 }
	
 	return 0;
 }
