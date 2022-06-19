//pattern question
#include<iostream>
using namespace std;
int main(){
	//rectangle pattern
	int rows;
	int columns;
	cin>>rows>>columns;
	for(int i=0;i<rows;i++){
		for(int j=0;j<columns;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	
	//hollow rectangle pattern
	int row;
	int column;
	cin>>row>>column;
	for(int i=1;i<=row;i++){
		for(int j=1;j<=column;j++){
			if(i==1||i==row||j==1||j==column){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	
	//inverted half pyramid
	int n;
	cin>>n;
	for(int i=n;i>=1;i--){
		for(int j=0;j<i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	
	//half pyramid after 180 degree rotation
	int a;
	cin>>a;
	for(int i=1;i<=a;i++){
		for(int j=1;j<=a;j++){
			if(j<=a-i){
				cout<<" ";
			}
			else{
				cout<<"*";
			}
		}
		cout<<endl;
	}
	
	//half pyramid using number
	int b;
	cin>>b;
	for(int i=1;i<=b;i++){
		for(int j=1;j<=i;j++ ){
			cout<<i;
		}
		cout<<endl;
	}
	
	//floyd's triangle
	int c;
	cin>>c;
	int k=1;
	for(int i=1;i<=c;i++){
		for(int j=1;j<=i;j++){
			cout<<k++<<" ";
		}
		cout<<endl;
	}
	
	//butterfly pattern
	int d;
	cin>>d;
	for(int i=1;i<=d;i++){
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		int space=2*d - 2*i;
		for(int j=1;j<=space;j++){
			cout<<" ";
		}
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i=d;i>=1;i--){
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		int space=2*d - 2*i;
		for(int j=1;j<=space;j++){
			cout<<" ";
		}
		for(int j=1;j<=i;j++){
			cout<<"*";
       }
		cout<<endl;
	}
	return 0;
}
