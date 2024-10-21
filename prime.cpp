
#include <iostream>
using namespace std;
int main() {
   int n,m,c=0;
   cout<<"Enter number = ";
   cin>>n;
   m=n-1;
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
    return 0;
}






