#include<iostream>
using namespace std;


int main()
{
    int arr[]={3,4,5,3,6,4};
    int c=0;
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            if(arr[i]==arr[j]){
                c++;
            }
        }
    }
    cout<<"duplicate value count"<<c;
    
    
}


// Print duplicate value
#include<iostream>
using namespace std;


int main()
{
    int arr[]={3,4,5,3,6,4};
    int c=0;
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            if(arr[i]==arr[j]){
                c++;
                cout<<arr[i]<<"\t";
            }
        }
    }
    cout<<"duplicate value count"<<c;
    
    
}