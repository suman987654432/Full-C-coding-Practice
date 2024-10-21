#include<iostream>
using namespace std;
int main(){
    int a[2][2][3]={2,3,4,5,2,3,3,4,2,5,4,6};
   
    int r,c;
   for(int t=0;t<2;t++){
        for(r=0;r<2;r++){
        for(c=0;c<3;c++){
 cout<<a[t][r][c]<<"\t";
        }
        cout<<"\n";
   }
        cout<<"\n";
}
}