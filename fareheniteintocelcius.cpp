//...1.WAP TO CONVERT FARHENIET INTO CELCIUS

#include<iostream>
using namespace std;
int main(){
  float a,b;
  cout<<"Enter Fahrenheit = ";
  cin>>a;
  cout<<"Fahrenheit into celcius = "<<(a-32)*5/9<<"\n";
   cout<<"Enter celcius = ";
  cin>>b;
  cout<<" celcius into Fahreniet  = "<<(b*9/5)+32;
}