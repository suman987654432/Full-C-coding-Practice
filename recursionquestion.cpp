// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
float mean(int a[],int n ){
    if(n==1){
        return a[n-1];
    }else{
       return ((mean(a, n - 1) * (n - 1) + a[n - 1]) / n);
    }
 
}
int main() {
int a[]={2,4,6,8,10};
int n=sizeof(a)/sizeof(a[0]);
cout<<mean(a,n);
}


sum of n number 
#include <iostream>
using namespace std;
int sum(int n ){
    if(n<=1){
        return 1;
    }else{
       return n+sum(n-1);
    }

}
int main() {
int n;
cout<<"enter number ";
cin>>n;
 cout<<sum(n);
}

convert decimal to binary
#include <iostream>
using namespace std;
int binary(int d ){
    if(d==0){
        return 0;
    }else{
       return d%2+10 *(binary(d/2));
}
}
int main() {
int d;
cout<<"enter number ";
cin>>d;
 cout<<binary(d);
}


sum of array
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int sum(int a[],int n ){
    if(n==1){
        return n;
    }else{
      return (a[n-1]+sum(a,n-1));
}
}
int main() {
int a[]={1,2,3};
int n=sizeof(a)/sizeof(a[0]);
 cout<<sum(a,n);
}

// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string stringReverse(string str ){
    if(str.size()==0{
        return "";
    }else{
      return (str.substr(1,size()))+str[0];
}
}
int main() {
string str;
cout<<"enter string ";
cout<<str;
cout<<stringReverse(str);
}