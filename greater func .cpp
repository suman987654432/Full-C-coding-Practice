#include<iostream>
using namespace std;
void table(int a, int b ){
  if(a>b){
      cout<<"a i greater";
     
  }
  else{
      cout<<"b i greater";
  }
}

int main(){
    int a,b;
    cout<<"enter two number= \n";
    cin>>a>>b;
  table(a,b);
}