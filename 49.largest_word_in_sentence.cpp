#include<iostream>
//largest word in a sentence
using namespace std;
int main(){
     int n;
     cin>>n;
     cin.ignore();
	char a[n+1];
	
	cin.getline(a,n);//getline is used to store the sentence whether after space we need new variable for new word
	cin.ignore();//it clear the buffer
	int i=0;
	int currlen=0,maxlen=0;
	int st=0,max_st=0;
	while(1){
		if(a[i]==' '|| a[i]=='\0'){
			if(currlen>maxlen){
				maxlen=currlen;
				max_st=st;
			}
			currlen=0;
			st=i+1;
		}
		else
		 currlen++;
		if(a[i]=='\0'){
			break;
		}
		i++;
	}
	
	cout<<maxlen<<endl;
	for(int i=0;i<maxlen;i++){
		cout<<a[i+max_st];
	}
	return 0;
}
