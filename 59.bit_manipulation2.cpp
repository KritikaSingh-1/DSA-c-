#include<iostream>
using namespace std;
//wap to check if a number is power of 2
bool ispowerof2(int n){
	return (n && !(n & n-1));  	
}

//count number of ones in a given number
int numberofones(int n){
	int counter=0;
	while(n){
		n = n&(n-1);
		counter++;
	}
	return counter;
}

//write all possible subset of a set
void possibleSubset(int arr[],int n){
	for(int i=0;i<(1<<n);i++){
		for(int j=0;j<n;j++){
			if(i&(1<<j)){
				cout<<arr[j]<<" ";
			}
		}
		cout<<endl;
	}
	
}

int main(){
   cout<<ispowerof2(8)<<endl; 
    cout<<numberofones(15)<<endl;
	int arr[4]={1,2,3,4};
	possibleSubset(arr,4);
	
	return 0;
}
