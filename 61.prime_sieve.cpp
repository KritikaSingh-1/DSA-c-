#include<iostream>
using namespace std;
//sieve of eratosthenes
void primesieve(int n){
	int prime[100]={0};
	
	for(int i=2;i<=n;i++){
		if(prime[i]==0){
			for(int j=i*i;j<=n;j+=i){
				prime[j]=1;
			}
		}
	}
	cout<<"the prime number is:";
	for(int i=2;i<=n;i++){
		if(prime[i]==0){
			cout<<i<<" ";
		}
	}
	cout<<endl;
}

int main(){
	int n;
    cout<<"enter the number n:"; 	
	cin>>n;
	primesieve(n);
	return 0;
}
