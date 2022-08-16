#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){

	string str="sarrkferfewewfefefw dmferhhgeens asd";
	str.clear();//it clear all the value
	cout<<str<<endl;
// comparing 2 string
    string s1="abc";
    string s2="xyz";
    string s3="abc";
    cout<<s2.compare(s1)<<endl;//1 means s2 is greater than s1 and 0 means s2 is smaller or equal to s1
    if(s1.compare(s3)==0){
    	cout<<"string are equal"<<endl;
	}
	
	if(!s1.compare(s3)){
		cout<<"string are equal"<<endl;
	}
	
//empty function
    if(str.empty()){
    	cout<<"string is empty"<<endl;
	}	
	
	string str1="nincompoop";
	
	str1.erase(3, 4);//from 3rd index to 4 character
	cout<<str1<<endl;
	
//find substring
    cout<<str1.find("oo")<<endl;
	
//insert function
    str1.insert(2, "lol");
    cout<<str1<<endl;

//size of string
    cout<<str1.size()<<endl;
	cout<<str1.length()<<endl;
	
//iteration of loop
    for(int i=0;i<str1.size();i++){
    	cout<<str1[i]<<endl;
	}		
	
//substring from string
    cout<<str1.substr(6,2)<<endl;

//change datatype string to int
    string str2="344";
	int x=stoi(str2);
	cout<<x+2<<endl;
//change int to string
    int y=567;
	string str3 = to_string(y)+"2";
	cout<<str3<<endl;
	
//sorting a string
     string str4="jkmnerkgrhgbngj";
	 sort(str4.begin(),str4.end());
	 
	 cout<<str4<<endl;				
			
	return 0;
}
