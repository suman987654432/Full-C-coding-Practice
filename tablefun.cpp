#include<iostream>
using namespace std;
void table(int n){
    for(int i=1;i<=10;i++){
    int tab=n*i;
    cout<<tab<<"\n";
    }            
}

int main(){
    int n;
    cout<<"enter number = \n";
    cin>>n;
  table(n);
}