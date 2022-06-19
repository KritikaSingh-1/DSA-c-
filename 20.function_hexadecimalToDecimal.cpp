#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
int hexadecimalToDecimal(string n){
	int ans=0;
	int m=1;
	int s= n.size(); /*measure the size of string*/
	for(int i=s-1;i>=0;i--){
		if(n[i]<='9' && n[i]>='0'){
			ans=ans+m*(n[i]-'0');
		}
		else if(n[i]>='A' && n[i]<='F'){
			ans=ans+m*((n[i]-'A')+ 10);
		}
		else if(n[i]>='a' && n[i]<='f'){
			ans=ans+m*((n[i]-'a')+ 10);
		}
		m *=16;
	}
	return ans;
}

int main(){
	string x;
	cin>>x;
	
	cout<<hexadecimalToDecimal(x)<<endl;
	
	return 0;
}
