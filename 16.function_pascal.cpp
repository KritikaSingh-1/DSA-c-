//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1
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
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			int ans = facto(i)/(facto(j)*facto(i-j));
			cout<<ans<<" ";
		}
		 cout<<endl;
	}
	
	return 0;
}
