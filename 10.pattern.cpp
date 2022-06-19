//advance pattern question
#include<iostream>
using namespace std;
int main(){
	//inverted pattern
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=1;j<=n-i;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
	
	//0-1 pattern
	int a;
	cin>>a;
	for(int i=1;i<=a;i++){
		for(int j=0;j<i;j++){
			if((i+j)%2==0){
				cout<<"0"<<" ";
			}
			else{
				cout<<"1"<<" ";
			}
		}
		cout<<endl;
	}
	
	//rhombus pattern
	int b;
	cin>>b;
	for(int i=1;i<=b;i++){
		for(int j=1;j<=b-i;j++){
			cout<<" ";
		}
		for(int k=0;k<b;k++){
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
	
	//triangle pattern
	int c;
	cin>>c;
	for(int i=0;i<c;i++){
		for(int j=0;j<c-i;j++){
			cout<<" ";
		}
		for(int k=1;k<=i+1;k++){
			cout<<k<<" ";
		}
		cout<<endl;
	}
	
	//palindromic pattern
	int d;
	cin>>d;
	for(int i=1;i<=d;i++){
		for(int j=1;j<=d-i;j++){
			cout<<"  ";
		}
		for(int k=i;k>=1;k--){
			cout<<k<<" ";
		}
		for(int k=2;k<=i;k++){
			cout<<k<<" ";
		}
		cout<<endl;
	}
	
	//star pattern
	int x;
	cin>>x;
	for(int i=1;i<=x;i++){
		for(int j=1;j<=x-i;j++){
			cout<<"  ";
		}
		for(int k=1;k<=2*i-1;k++){
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
	for(int i=x;i>=1;i--){
		for(int j=1;j<=x-i;j++){
			cout<<"  ";
		}
		for(int k=1;k<=2*i-1;k++){
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
	
	//zig zag pattern
	int y;
	cin>>y;
	for(int i=1;i<=3;i++){
		for(int j=1;j<=y;j++){
			if(((i+j)%4==0) || (i==2 && j%4==0)){
				cout<<"*";
			}
			else{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
	return 0;
}
