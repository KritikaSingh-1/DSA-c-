#include<iostream>
#include<climits>
//print maximum subarray sum
using namespace std;
int main(){
 	int n;
 	cin>>n;
 	int a[n];
    int maxsum=INT_MIN;
 	cout<<"enter the element in array:";
 	for(int i=0;i<n;i++){
 		cin>>a[i];
	 }
	
	/*o(n^3)
	 for(int i=0;i<n;i++){
	 	for(int j=i;j<n;j++){
	 		int sum=0;
	 		for(int k=i;k<=j;k++){
	 			sum+=a[k];
	 			cout<<a[k]<<" \t ";
			 }
			cout<<endl;
			maxsum=max(maxsum,sum);
		 }
	 }*/
	 
	 
	 
	 
	/* //o(n^2)
	 //cumulative sum approach
	 int currsum[n+1];
	 currsum[0]=0;
	 for(int i=1;i<=n;i++){
	 	currsum[i]= currsum[i-1]+a[i-1];
	 
	 }
	
	 for(int i=1;i<=n;i++){
	 	int sum = 0;
	 	for(int j=0;j<i;j++){
	 		sum=currsum[i]-currsum[j];
	 		maxsum = max(sum,maxsum);
		 }
	 }*/
	 
	 
	 //o(n)
     //kadane's algorithm
	 int currsum=0;
	 
	 for(int i=0;i<n;i++){
	 	currsum+=a[i];
	 	if(currsum<0){
	 		currsum=0;
		 }
		 maxsum=max(maxsum,currsum);
	 }
	 
	 	 
	 cout<<maxsum;
	 
	 return 0;
}
