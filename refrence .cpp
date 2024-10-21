// REFRENCE VARIABLE IS USED TO REFER OF PREVIOUS VARIABLE .
//IT DOESNT OCCUPIED ANY SPACE OR WE CAN SAY THAT IT IS NTHE ALIASING NAME 0F PREVIOUS VARIABLE.

//Exzample

#include<iostream>
using namespace std;
int main(){
    int n=10;
    int &c=10;
    cout<<c;

    
#include<iostream>
using namespace std;
int main()
{ 
    int a=200;
    int *p;
    cout<<&p<<"\n";
    cout<<&a<<"\n";
    p=&a;
    cout<<*p;
    
}