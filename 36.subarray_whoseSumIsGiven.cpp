#include<iostream>
#include<bits/stdc++.h>
//find subarray with given sum
using namespace std;
int main(){
 	int n,s;
 	cin>>n>>s;
 	int a[n];
 	cout<<"enter the element in array:";
 	for(int i=0;i<n;i++){
 		cin>>a[i];
 	 }
 	 int sum=0;
 	 int st=-1;
 	 int e=-1;
 	 int i=0,j=0;
 	 while(j<n && sum+a[j]<=sum){
 	 	sum+=a[j];
 	 	j++;
	  }
	  if(sum==s){
	  	cout<<i+1<<" "<<j<<endl;
	  	return 0;
	  }
	  while(j<n){
	  	sum+=a[j];
	  	while(sum>s){
	  		sum-=a[i];
	  		i++;
		  }
		  if(sum==s){
		  	st=i+1;
		  	e=j+1;
		  	break;
		  }
		  j++;
	  }
	  cout<<st<<"  "<<e;
	  
 	return 0;
}
