#include<iostream>
//find record breaking day the day is greater than previous and coming day.
using namespace std;
int main(){
 	int n;
 	cin>>n;
 	int a[n+1];
 	a[n]=-1;
 	cout<<"enter the element in array:";
 	for(int i=0;i<n;i++){
 		cin>>a[i];
	 }
	 int mx=a[0];
	 int ans=0;
	 
	 if(n==1){
	 	cout<<"1"<<endl;
	 	return 0;
	 }
	 
	 for(int i=1;i<n;i++){
	 	if(a[i]>mx && a[i]>a[i+1]){
	 		cout<<"record breaking day"<<i+1<<endl;
	 		
	 		ans++;
		 }
		 mx=max(mx,a[i]);
		 
	 }
	 cout<<ans<<endl;
	return 0;
}
