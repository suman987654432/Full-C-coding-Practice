#include<iostream>
using namespace std;
void base(int b,int n){
    int r=1,i=0;
     do{
     r*=b;
     i++;
  }while(i<n);
  cout<<r;
}
int main(){
    int b,n;
    cout<<"Enter base  ";
    cin>>b;
    cout<<"Enter number ";
    cin>>n;
    base(b,n);
}