// find nth term of fibonaci series


#include <iostream>
using namespace std;

int fav(int n){
    if(n<=1)
    return n;
    else

  return fav(n-1)+fav(n-2);
}
int main() {
int n;
cout<<"Enter number ";
cin>>n;
cout<<fav(n);
}