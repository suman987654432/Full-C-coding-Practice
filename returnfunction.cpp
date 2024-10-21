#include<iostream>
using namespace std;
int increment(){
    return 1000;
}
int main(){
    cout<<increment()+1000;
}




#include<iostream>
//return and with argument 
using namespace std;
int product(int p1,int p2){
   int a=p1*500;
   int b=p2*500;
   return a+b;
}
int main(){
    int p1,p2;
    cout<<"enter mobile qunat";
    cin>>p1;
    cout<<"enter qunat laptop";
    cin>>p2;
    cout<<product(p1,p2);
}