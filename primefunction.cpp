#include<iostream>
using namespace std;
void prime(int n){
    int c;
     int m=n-1;
   while(m>1){
       if(n%m==0){
           c++;
           break;
       }
       m--;
   }
   if(c==0){
       cout<<"prime";
   }
else{
    cout<<"not";  
}
}
int main(){
    int n ;
    cout<<"Enter number ";
    cin>>n;
 prime(n);
}