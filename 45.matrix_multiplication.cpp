#include<iostream>
//matrix tranpose
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
 	int a[n][m];
 	cout<<"first matrix elements:";
    for(int i=0;i<n;i++){
 		for(int j=0;j<m;j++){
 	    	cin>>a[i][j];
	    }
 	    
    }
    cout<<endl;
	int x,y;
	cin>>x>>y;
	int b[x][y];
	cout<<"second matrix element:";
    for(int i=0;i<x;i++){
 		for(int j=0;j<y;j++){
 	    	cin>>b[i][j];
	    }
 	    
    } 	
	  		
	
	int k=n;
	int l=y;
	int c[k][l];
	for(int i=0;i<k;i++){
		for(int j=0;j<l;j++){
		  c[i][j]=0;		
		}
	}
	if(m==x){
		cout<<"the matrix multiplication is:"<<endl;
		
		for(int i=0;i<n;i++){
 		    for(int j=0;j<m;j++){
 	    	    cout<<a[i][j]<<"\t";
	        } 
 	        cout<<endl;
        }
        
        for(int i=0;i<x;i++){
 	    	for(int j=0;j<y;j++){
 	        	cout<<b[i][j]<<"\t";
	        }
 	        cout<<endl;
        } 	    
		for(int i=0;i<k;i++){
			for(int j=0;j<l;j++){
				for(int s=0;s<m;s++){
					c[i][j]+=a[i][s]*b[s][j];
				}
				
			}
		}
		cout<<"multiplication is:"<<endl;
		for(int i=0;i<k;i++){
			for(int j=0;j<l;j++){
				cout<<c[i][j]<<"\t";
			}
			cout<<endl;
		}
	}
	else{
		cout<<"multiplication not possible";
	}
	 
	return 0;
}
