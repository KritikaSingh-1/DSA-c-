#include<iostream>
#include<cmath>
using namespace std;
bool is_prime(int n){
	bool flag = 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			flag =1;
			break;
		}
	}
	return flag;
}
int main(){
	int a,b;
	cin>>a>>b;
	for(int i=a;i<=b;i++){
		if(is_prime(i)==0){
			cout<<i<<endl;
		}
	}
	return 0;
}
