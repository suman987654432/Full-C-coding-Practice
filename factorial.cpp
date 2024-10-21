#include<iostream>
using namespace std;
int factorial(int a){
int fact=1;
for(int i=2;i<=a;i++){
fact=fact*i;
}
return fact;
}
int main(){
    int a;
    cout<<"enter  number= \n";
    cin>>a;
  cout<<factorial(a);
}