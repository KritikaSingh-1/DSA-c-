#include<iostream>
#include<string>
//different ways to declaration of string
using namespace std;
int main(){
//1
	string str;
	cin>>str;
	cout<<str<<endl;
//2
    string str1(5,'n');	
	cout<<str1<<endl;
//3
    string str2="cuttu kritika";
    cout<<str2<<endl;
//4    
    getline(cin,str);
    cout<<str<<endl;
//concatenation of string
    string s1="fam";
	string s2="ily";

	cout<<s1+s2<<endl;

	s1.append(s2);	
	cout<<s1<<endl;
//access any character
    cout<<s1[1]<<endl;	    
	
	return 0;
}

