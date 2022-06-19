#include<iostream>
#include<cmath>
using namespace std;
int DecimalTooctal(int n){
	int ans=0;
	int r=0;
	int x=1;
	while(n>0){
		r=n%8;
		ans = ans + r*x;
		x*=10;
		n=n/8;
		
	}
	ans=ans+ n*x*10;
	return ans;
}

int main(){
	int a;
	cin>>a;
	cout<<DecimalTooctal(a)<<endl;
	
	return 0;
}
	
