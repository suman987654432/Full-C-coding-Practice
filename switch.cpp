
// SWITCH CASE IS USED FOR CHOISE BASE PROGRAMMING  THE EXECUTION SPEED OF
//  SWITCH CASE IS FASTER THAN NESTED IF ELSE . MENU BASED PROGRAMING .

//NOTE :- SWITCH CASE DOES NOT SUPPORT ANY OPERATORS ACCEPT ARITHMETIC OPERATOR.
//NOTE:- IN A SWITCH CASE IF WE DONT USE BREAK STATEMENT IT WILL TREATED AS "FALL THROUGH SITUATION".
//SYNTAX

// switch(condition){
//     case value:
//     {
//         statement;
//         break;
//     }
//      case value:
//     {
//         statement;
//         break;
//     }
//     default:{
//         statement;
//     }


// }


#include<iostream>
using namespace std;
int main(){
    float a,b;
    char  c;
    cout<<"Enter two number = \n";
    cin>>a>>b;
    cout<<"Select a for add and m for multiply = ";
    cin>>c;
    switch(c){
        case 'a':
        case 'A':{
            cout<<a+b;
            break;
        }
        case 'm':{
            cout<<a*b;
            break;
        }
        default:{
            cout<<"Invallid ";
        }
    }
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
