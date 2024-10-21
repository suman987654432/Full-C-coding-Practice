//ARMSTRONG NUMBER ...

#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter number = ";
    cin>>a;
    int b=a/100;
    int c=a%100;
    int d=c/10;
    int e=c%10;
    int result=(b*b*b)+(d*d*d)+(e*e*e);
    if(a==result){
    cout<<"armstrong number ";
    }
    else{
        cout<<"not";
    }

}