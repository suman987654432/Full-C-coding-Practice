//LADDER CONDITION IT IS ALSO KNOWN A SOUTER CONDITION  IT IS DIFFRENT FRM NESTED CONDITION 
//HERE WE USED MULTIPLE ELSEIF CONDITION 
//find largest number among 3 number
#include<iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"Enter 3 diffrent number = ";
cin>>a>>b>>c;
if(a>b && a>c){
    cout<<a;
}
else if(b>a && b>c){
    cout<<b;
}
else{
    cout<<c;
}
}



