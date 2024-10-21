#include <iostream>
#include <climits>
using namespace std;

int main() {
int arr[]={2,3,9,5,6};
int s=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<s;i++){
    cout<<arr[i];
}
for(int i=0;i<s;i++){
    for(int j=i+1;j<s;j++){
        if(arr[i]>arr[j]){
            int tmp=arr[j]; 
            arr[j]=arr[i];
            arr[i]=tmp;
        }
    } 
}
 cout<<"\nascending order\n";
for(int i=0;i<s;i++){
        cout<<arr[i];
    }

}


