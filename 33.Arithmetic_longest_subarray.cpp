#include<iostream>
//find longest arithmetic subarray(the common difference between adjacent number is equal) in given array 
using namespace std;
int main(){
 	int n;
 	cin>>n;
 	int a[n];
 	cout<<"enter the element in array:";
 	for(int i=0;i<n;i++){
 		cin>>a[i];
	}
	 
	 
 	int pd=a[1]-a[0];
 	int ans=2;
 	int j=2;
 	int current=2;	
	while(j<n){
	 	if(pd==a[j]-a[j-1]){
	 		current++;
		}
		else{
		 	pd=a[j]-a[j-1];
		 	current = 2;
		}
	 	ans = max(ans,current);
	 	j++;
	}
	cout<< ans <<endl;
	
	return 0;
}
