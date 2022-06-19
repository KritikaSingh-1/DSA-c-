#include<iostream>
#include<climits>/*this header file is used to include max and min function*/
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int maxn=INT_MIN;/*thin MIN_INT and MAX_INT function give maximum value*/
	
	int minn=INT_MAX;
	
	for(int i=0;i<n;i++){
		/*maxn = max(maxn,arr[i])*/
		if(arr[i]>maxn){
			maxn=arr[i];
		}
		/*minn = min(minn,arr[i])*/
		if(arr[i]<minn){
			minn=arr[i];
		}
	}
	cout<<maxn<<" "<<minn<<endl;
	return 0;

}
