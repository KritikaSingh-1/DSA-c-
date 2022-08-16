#include<iostream>
#include<climits>
//print 2d array
using namespace std;
int main(){
 	int n,m;
 	cin>>n>>m;
 	int a[n][m];
 	int x;
 	cin>>x;
 	cout<<"enter the element in array:";
 	for(int i=0;i<n;i++){
 		for(int j=0;j<m;j++){
 			cin>>a[i][j];
		 }
 		
	 }
		for(int i=0;i<n;i++){
 		for(int j=0;j<m;j++){
 			if(a[i][j]==x){
 					cout<<a[i][j]<<endl;
 				cout<<"element found"<<endl;
			 }
 		
		 }
 		cout<<endl;
	 }
	return 0;
}
