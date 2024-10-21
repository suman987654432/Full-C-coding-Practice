// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int power(int n,int b){
    if(b>0)
  
    return n*power(n,b-1);
    else
    return 1;
    
}
int main() {
int n,b;
cout<<"Enter number ";
cin>>n;
cout<<"Enter power ";
cin>>b;
cout<<"Factorial is "<<power(n,b);
}