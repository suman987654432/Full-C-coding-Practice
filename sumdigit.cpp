//WAP TO SUM OF THREE NUMBER 
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter three digit number = ";
    cin>>a;
    int b=a/100;
    int c=a%100;
    int d=c/10;
    int e=c%10;
    cout<<b+d+e;
}