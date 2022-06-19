#include<iostream>
using namespace std;
int main(){  
  int n,i,*ptr,sum=0;    
    cout<<"enter the value of n:";
	cin>>n;    
    ptr=(int*)malloc(n*sizeof(int));  //memory allocated using malloc    
    if(ptr==NULL)                         
    {    
       cout<<"unable to allocate memory";
	   return 0;    
    }    
    cout<<"Enter element of array";   
    for(i=0;i<n;++i)    
    {    
        cin>>ptr+i;    
        sum+=*(ptr+i);    
    }    
    cout<<sum;    
    free(ptr);     
return 0;  
}    

