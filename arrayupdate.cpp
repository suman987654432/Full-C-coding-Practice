
#include <iostream>
using namespace std;
int main() {
int arr[5];
cout<<"enter numberv ";
for(int i=0;i<5;i++){
   cin>>arr[i];
//   arr[i]++;
}
cout<<"stored number is ";
for(int i=0;i<5;i++){
    arr[i]=arr[i]+1;
   cout<<arr[i]<<"\t";
}
}