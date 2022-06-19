#include<iostream>
#include<climits>
using namespace std;
int chocolate(int n){
	int q;
	int rem;
	int count=0;
	while(n>=3){
		q=n/3;
		rem=n%3;
		n=rem+q;
		count=count+q;
	}
	return count;
}
int main(){
	int n;
	cin>>n;
	int s=chocolate(n);
	cout<<s+n;
	return 0;
}
