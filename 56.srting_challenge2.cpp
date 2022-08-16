#include<iostream>
#include<string>
#include<algorithm>
//find the biggest number to the numeric string
using namespace std;
int main(){
	string str="345456";
	sort(str.begin(),str.end(),greater<int>());
	cout<<str<<endl;
	
	return 0;
}
