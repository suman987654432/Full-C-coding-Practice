// //Example of Tokens 
// //Variable = it refers the memory address of datatype.
// #include<iostream>
// using namespace std;
// int main(){
//     int a; //Declaration
//     a=30;  //Initalization
//    // cout<<&a;  //& refrence operator
//     cout<<sizeof(a);  //used to show size 
// }
#include<iostream>
using namespace std;
int main(){
  int a,b;
 cout<<"Enter first number =";
 cin>>a;
  cout<<"Enter second number =";
 cin>>b;
 cout<<"Addition is  =" <<a+b;
  cout<<"Subtraction is  =" <<a-b;
   cout<<"Multiplication is =" <<a+*b;
    cout<<"Division is  =" <<a/b;
     cout<<"Modulus is  =" <<a%b;
}