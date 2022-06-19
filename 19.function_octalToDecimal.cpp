#include<iostream>
#include<cmath>
using namespace std;
int octalToDecimal(int n){
	int r;
	int ans=0;
	int m=1;
	while(n>0){
	r=n%10;
	ans = ans+r*m;
	m*=8 ;	
	n=n/10;
	}
	return ans;
}

int main(){
	int n;
	cin>>n;
	cout<<octalToDecimal(n)<<endl;
	
	return 0;
}
