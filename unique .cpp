//unique
#include<iostream>
using namespace std;
int main(){
    int i,j;
    int a[]={4,3,2,4,5,2,5,9};
    int s=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<s;i++){
        for(int j=0;j<s;j++){
            if(a[i]==a[j]){
                break;
            }
        }
        if(i==j){
            cout<<"unique is "<<a[i];
        }
    }

   
}