// 1.IT IS USED FOR REUSABILITY.
// 2.IT SAVES MEMORY.
// 3.IT SAVES TIME ALSO.
// 4.THERE ARE TWO TYPES OF FUNCTION -------------
//        1. PREDEFINED FUNCTION  (INBUILT FUNCTION)
//        2. USERDEFINED FUNCTION

// 5.USER DEFINED FUNCTION HAVING TWO TYPES:-------
//             1. FUNCTION THAT RETURN VALUE.
//             2. FUNCTION THAT DOESNOT RETURN VALUE.
        
// 6. A COMMON TYPE OF BOTH FUNCTION IS -------------
//      1.WITHIN PARAMETER
//      2.WITHOUT PARAMETER 
       

  #include<iostream>
using namespace std;
void show(){   // no return without parameter
    cout<<"hey suman"<<"\n";
}
void sum(int a,int b){ //no return with parameter   formal parameter 
    cout<<"sum = "<<a+b;
}

int main(){
    show();  //explicit calling function
    sum(6,7); //actual parameter  (argument)
}

       

       //example

       #include<iostream>
using namespace std;
void shop(){
    cout<<"suman\n"<<"sumit\n";
}

int main(){
    for(int i=0;i<=10;i++){
   shop();  }
}



#include<iostream>
using namespace std;
void deposit(int a){
    int d=100;
    cout<<d+a;
}

int main(){
   int a;
   cout<<"enter amount";
   cin>>a;
   deposit(a);
}




//password
#include<iostream>
using namespace std;
void deposit(int a, int b){
    int pass=2000;
    int d=1000;
    if(pass==a){
        cout<<d+b;
    }
    else{
        cout<<"wrong";
    }
}
int main(){
   int a,b;
   cout<<"enter password";
   cin>>a;
   cout<<"enter amount";
   cin>>b;
   deposit(a,b);
}



#include<iostream>
using namespace std;
void deposit(int a, int b){
    int pass=2000;
    int d=1000;
    if(pass==a){
        
          if(b<0){
     cout<<" password not";   
    }
    else{
        cout<<b+d;
    }
    }
   
    else{
        cout<<"wrong";
    }
}
int main(){
   int a,b;
   cout<<"enter password";
   cin>>a;
   cout<<"enter amount";
   cin>>b;
   deposit(a,b);
}
       