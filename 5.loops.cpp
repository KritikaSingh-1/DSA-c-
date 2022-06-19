#include<iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	int sum=0;
	//for loop
	for(int i=0;i<=a;i++)
	{
		sum = sum+i;
	}
	cout<<sum;
	//while loop
		int n;
	cin>>n;
	while(n>0){
		cout<<n;
		cin>>n;
	}

    //do while loop
    int m;
    cin>>m;
    do{
    	cout<<m;
    	cin>>m;
	}while(m>0);
	return 0;
}
