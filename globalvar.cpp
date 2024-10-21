//SCOPE RESOLUTITION OPERATOR  (::)  = It is used to access global value (heap) Local variable(Stack)  (Special operator)
//Address Operator
//(&)=return memory address of the variable thats why it is also called address  operator.
//REFRENCE VARIAVLE IS OTHER NAME OF PREVIOUS VARIABLE.


// #include<iostream>
// using namespace std;
// int b=7; //Global variable
// int main(){
// int b=6;
// cout<<::b;
// }

#include<iostream>
using namespace std;
int main(){
int b=6;
int &c=b;
cout<<"adress of b"<<&b<<"\n";
cout<<"adress of c"<<&c<<"/n";
cout<<"value of b "<<b<<"\n";
cout<<"value of c "<<c;
}