#include<iostream>
using namespace std;
//we use xor bitwise operator for a unique number
int uniquenumber(int a[],int n){
	int xorsum=0;
	for(int i=0;i<n;i++){
		xorsum = xorsum^a[i];
	}
	return xorsum;
}

//find two unique number
int getBit(int n,int pos){
	
	return ((n & (1<<pos))!=0);
}

void twounique(int arr[],int a){
	int xorsum=0;
	for(int i=0;i<a;i++){
		xorsum = xorsum^arr[i];
	}
	int tempxor=xorsum;
	int setbit=0;
	int pos=0;
	while(setbit!=1){
		setbit =xorsum&1;
		pos++;
		xorsum=xorsum>>1;
	}
	int newxor=0;
	for(int i=0;i<a;i++){
		if(getBit(arr[i],(pos-1))){
		    newxor=newxor^arr[i];	
		}
	}
	cout<<"the two unique number is:"<<endl;
	cout<<"first number is:"<<newxor<<endl;
	cout<<"second number is:"<<(tempxor^newxor)<<endl;
}

//find a unique number where all the number present thrice except unique number
int setBit(int n,int pos){
    
	return n|((1<<pos));
}

int uniquethrice(int ar[],int n){
	int result=0;
	
	for(int i=0;i<64;i++){
		int sum=0;
		for(int j=0;j<n;j++){
			if(getBit(ar[j],i)){
				sum++;
			}
		}
		if(sum%3!=0){
			result=setBit(result,i);
		}
	}
	return result;
}

int main(){

	int arr[]={1,2,3,4,5,4,3,2,1};   
	int a[]={1,2,3,4,7,5,4,3,2,1};     
	int ar[]={1,3,2,3,6,2,1,1,3,2};
	cout<<"the unique number is:"<<uniquenumber(arr,9)<<endl;
	twounique(a,10); 
	cout<<"the unique number is:"<<uniquethrice(ar,10);
    return 0;
}

