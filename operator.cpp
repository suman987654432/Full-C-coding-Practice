//addition subtraction multiplication
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



//WAP to find square cube and area of circle



#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter number=";
    cin>>a;
    cout<<"cube is "<<a*a*a<<"\n";
     cout<<"square  is "<<a*a<<"\n";
      cout<<"area of circle is "<<3.14*a*a;
}

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


//SUM OF NUMBER  AND CUBE ....

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
    cout<<"sum = "<<b+d+e;
    cout<<"first digit ="<<b*b*b<<"\n";
    cout<<"first digit ="<<d*d*d<<"\n";
    cout<<"first digit ="<<e*e*e;
}


// Reverse.....
#include <iostream>
using namespace std;
int main() {
    int a;
    cout<<"Enter number = ";
    cin>>a;
    int b=a/100;
    int c=a%100;
    int d=c/10;
    int e=c%10;
    int f=(e * 100) + (d * 10) + b;
    cout<<"after swapping = "<<f;
}

//SWAPPING....
#include <iostream>
using namespace std;
int main() {
    int a=20,b=5,c;
    c=a;
    a=b;
    b=c;
    cout<<"After swapping="<<a<<"\n";
    cout<<"After swapping="<<b;
    return 0;
   }
  int main(){
    int a=10,b=4;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"AFter swapping"<<a;
     cout<<"AFter swapping"<<b;
}

//SIMPLE INTREST ......


#include <iostream>
using namespace std;
int main() {
    int p,r,t;
    cout<<"Enter principle = ";
    cin>>p;
    cout<<"Enter rate = ";
    cin>>r;
    cout<<"Enter time = ";
    cin>>t;
    cout<<"Simple intrest = "<<(p*r*t)/100;

}

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







