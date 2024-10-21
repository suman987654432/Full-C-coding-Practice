#include<iostream>
using namespace std;
int main()
{
    int arr[]={3,4,5,3,6,4};
    int c=0,i,j;
    int len=sizeof(arr)/sizeof(arr[0]);
    for( i=0;i<len;i++){
        for( j=0;j<len;j++){
            if(arr[i]==arr[j]){
                break;
            }
        }
        if(i==j){
            cout<<arr[i];
        }
    }
}