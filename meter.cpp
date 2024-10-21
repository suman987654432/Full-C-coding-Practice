#include<iostream>
using namespace std;
int main(){
int m;
cout<<"Enter meter reading = \n";
cin>>m;
if(m>=1 && m<=100){
    cout<<"Charge is 5rs  "<<" Bill is = "<<(m*5)+(m*5*20)/100;
}
else if(m>=101 && m<=500){
    cout<<"Chrge is 7rs "<<" Bill is = "<<(m*7)+(m*7*20)/100;
}
else if(m>=500){
    cout<<"Chrge is 10rs ="<<" Bill is = "<<(m*10)+(m*10*20)/100;
}
else{
    cout<<"Invalid meter reading";
}

}


//Take 3 subject and total and and out percentage  per 35>=50 third   per 51 to 60 second 60 to 100 first else fail