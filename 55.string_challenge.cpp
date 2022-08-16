#include<iostream>
#include<string>
#include<algorithm>

//convert the string in upper or lower case
using namespace std;
int main(){
	string str="badfnaafghfnek";
	string str1="AHJHSDKJVDFVBHDJFHHF";
	cout<<'a'-'A'<<endl;
	//convert into upper case
	for(int i=0;i<str.length();i++){
		if(str[i]>='a' || str[i]<='z'){
			str[i]-=32;
		}
	}
	cout<<str<<endl;
	//convert into lower case
	for(int i=0;i<str1.length();i++){
		if(str1[i]>='A' || str1[i]<='Z'){
			str1[i]+=32;
		}
	}
	cout<<str1<<endl;
	
	string str2="fdfDsfdbDSDtrhtrhbv";
	transform(str2.begin(),str2.end(),str2.begin(),::toupper);
	cout<<str2<<endl;
	
	transform(str2.begin(),str2.end(),str2.begin(),::tolower);
	cout<<str2<<endl;
	
	return 0;
}
