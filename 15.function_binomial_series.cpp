#include<iostream>
#include<cmath>
using namespace std;
int facto(int n){
	int fact =1;
	for(int i=n;i>1;i--){
		fact = fact*i;
	}
	return fact;
}
int main(){
	int n,r;
	cin>>n>>r;
	int ans= facto(n)/(facto(r)*facto(n-r));
	cout<<ans<<endl;
	
	return 0;
}
