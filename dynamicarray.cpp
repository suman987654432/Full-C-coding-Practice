#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"enter row size \n";
    cin>>r;
      cout<<"enter column size \n";
    cin>>c;
    int **arr=new int*[r];
    for(int i=0;i<r;i++){
        arr[i]=new int [c];
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Value stored ini array= \n";
        for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
        }
    
    
    
}