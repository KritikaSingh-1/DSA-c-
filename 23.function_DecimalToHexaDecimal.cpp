#include<iostream>
#include<cmath>

using namespace std;

string DecimalToHexaDecimal(int n){
	int x=1;
	int r;
	string ans="";
	while(x<=n){
		x=x*16;
	}
	x=x/16;
	while(n>0){
		r=n/x;
		n=n-r*x;
		x=x/16;
	
		if(r<=9){
			ans=ans+ to_string(r);
		}
		else{
			char c = 'A' + r-10;
			ans.push_back(c);
		}
	
	}
	return ans;

}

int main(){
	int a;
	cin>>a;
	cout<<DecimalToHexaDecimal(a)<<endl;
	
	return 0;
}
	
