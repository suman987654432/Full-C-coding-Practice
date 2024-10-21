//PLAINDROME NUMBER 

#include <iostream>
using namespace std;
int main() {
    int a;
    cout<<"Enter number";
    cin>>a;
    int b=a/100;
    int c=a%100;
    int d=c/10;
    int e=c%10;
    int f=(e * 100) + (d * 10) + b;          
    if(a==f){
    cout<<"plaindrome";
    }
    else{
    cout<<"not";
 }
}
