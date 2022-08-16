#include<iostream>
using namespace std;
//hacker rank
int main(){
	int query;
	cin>>query;
	
	int row;
	cin>>row;
	int **p=new int*[row];
	for(int i=0;i<row;i++){
		cout<<"Enter the value of column:";
		int column;
		cin>>column;
		p[i]=new int[column];
		for(int j=0;j<column;j++){
			cin>>p[i][j];
			cout<<"  ";
		}
		cout<<endl;
			
	}
	while(query-- >0){
		int r;
		int c;
		cin>>r>>c;
		cout<<p[r][c]<<endl;
	}
	return 0;
}
