#include<iostream>
#include<climits>
//print 2d array
using namespace std;
int main(){
 	int n,m;
 	cin>>n>>m;
 	int a[n][m];
 	cout<<"enter the element in array:";
 	for(int i=0;i<n;i++){
 		for(int j=0;j<m;j++){
 			cin>>a[i][j];
		 }
 		
	 }
		for(int i=0;i<n;i++){
 		for(int j=0;j<m;j++){
 			cout<<a[i][j]<<"\t";
		 }
 		cout<<endl;
	 }
	return 0;
}
