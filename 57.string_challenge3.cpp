#include<iostream>
#include<string>
#include<algorithm>
//find the character whose occur maximum time
using namespace std;
int main(){
	string str="adgaggesamggna";
	int arr[26];
	for(int i=0;i<26;i++){
		arr[i]=0;
	}
	for(int i=0;i<str.length();i++){
		arr[str[i]-'a']++;
		
	}
	char ans='a';
	int maxF=0;
	for(int i=0;i<26;i++){
		if(arr[i]>maxF){
			maxF=arr[i];
			ans=i+'a';
		}
	}
     cout<<maxF<<endl;
     cout<<ans<<endl;
     
	return 0;
}
