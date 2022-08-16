#include<iostream>
#include<climits>
//print pair sum problem
using namespace std;
/*bool pairsum(int arr[],int n,int k){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(arr[i]+arr[j]==k){
				cout<<i<<" "<<j<<endl;
				return true;
			}
		}
	}
	return false;
}*/

//this method is for sorted array and time complexity is o(n)
bool pairsum(int arr[],int n,int k){
	int low=0;
	int high=n-1;
	while(low<high){
		if(arr[low]+arr[high]==k){
			cout<<high<<" "<<low<<endl;
			return true;
		}
		else if(arr[low]+arr[high]>k){
			high--;
		}
		else{
			low++;
		}	
	}
	return false;
}

int main(){
 	int n;
 	cin>>n;
 	int a[n];
 	int num=32;
    //int maxsum=INT_MIN;
 	cout<<"enter the element in array:";
 	for(int i=0;i<n;i++){
 		cin>>a[i];
	 }
	 cout<<pairsum(a,n,num);
	 return 0;
}
	
