#include<iostream>
using namespace std;
void swap (int &a,int &b){  //& call bye refrence
    int tmp;
    tmp=a;
    a=b;
    b=tmp;
    // cout<<"a="<<a<<"\t";
    // cout<<"b="<<b<<"\t";
}


int main(){
int a,b;
cout<<"enter a and b";
cin>>a>>b;
swap(a,b);//call bye value 
cout<<a<<b;
}


#include<iostream>
using namespace std;
void array(int a[],int s) {
	for(int i=0; i<s; i++) {
		a[i]=a[i]+10;
	}
}

int main() {
	int a[]= {3,8,3,12,3,3};
	int s=sizeof(a)/sizeof(a[0]);
	array(a,s);
	for(int i=0; i<s; i++) {
		cout<<a[i]<<"\t";
	}
}