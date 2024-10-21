//               TERNARY OPERATOR :-

// In a ternary operator first of all we give the condition and if 
// the condition is true or satisfied it will be get the value of (?).
// else it will be get colon(:) value.
//even   password  check positive negative


// #include<iostream>
// using namespace std;
// int main(){
// int a;
// // a=9>2?10:-10;
// // cout<<a;
// 34>=18?cout<<"you can vote":cout<<"you can't";
// }

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
  int a,b;
  cout<<"Enter 1 numbber = ";
  cin>>a;
  cout<<"Enter 2 numbber = ";
  cin>>b;
  
  a-b>0?cout<<a:cout<<b;

    return 0;
}


#include <iostream>
using namespace std;
int main() {
 int a;
  cout<<"Enter  numbber = ";
  cin>>a;
 

a>0?cout<<a:cout<<-a;

    return 0;
}



#include <iostream>
using namespace std ;
int main() {
int m,n;
cout<<"Enter number = ";
cin>>m;
cout<<"select one or two or three";
cin>>n;
switch(n){
    case 1:{
    cout<<"square is "<<m*m;
    break;
}
case 2:{
    cout<<"Cube is "<<m*m*m;
    break;
}
case 3:{
  m%2==0?cout<<"even":cout<<"odd";
  break;
}
default:{
    cout<<"Inavlid";
}

}
}
