// check perfect nuber

#include<iostream>
using namespace std;
int main()
{
 int n,sum=0;
 cout<<"enter number = ";
 cin>>n;
 for(int i=1;i<n;i++){
     if(n%i==0){
         sum=sum+i;
     }
 }
 if(sum==n){
     cout<<"this is perfect number";
 }
 else{
     cout<<"not perfect number";
 }
 
}

