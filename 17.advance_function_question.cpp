//pythagorous triplet, sum
#include<iostream>
#include<cmath>
using namespace std;
int sum(int n){
	int summ=0;
	for(int i=1;i<=n;i++){
		summ+=i;
	}
	return summ;
}

bool pythagor(int x,int y,int z){
	int a= max(x,max(y,z));
	int b,c;
	if(a == x){
		b = y;
		c = z;
	}
	else if(a == y){
		b = z;
		c = x;
    }
    else{
    	b = x;
    	c = y;
    }
    if(a*a == b*b + c*c){
    	return true;
	}
	else{
		return false;;
	}
}
int main(){
	int n;
	int p,q,r;
	cin>>n>>p>>q>>r;
	cout<<sum(n);
	if(pythagor(p,q,r)==true){
		cout<<"pythagorous triplet"<<endl;
	}
	else{
		cout<<"non-pythagorous triplet";
	}
	return 0;
}
