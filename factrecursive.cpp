
#include <iostream>
using namespace std;
int fact(int n){
    if(n==1){
        return 1;
    }
   int k=n*fact(n-1);
   return k;
}
int main() {
 cout<<"Factorial is "<<fact(5);
}