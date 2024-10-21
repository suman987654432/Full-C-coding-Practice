// SINGLE CONDITION 

// SYNTAX..
// IF(CONFITION){
//     STATEMENT
// }

#include<iostream>
using namespace std;
int main(){
    cout<<"Enter ur age";
    cin>>a;
    if(a>0 && a<100){
        cout<<"your age is "<<a;
    }
}


// BI CONDITION..................

// SYNTAX..
// IF(CONDITION){
//     STATEMENT
// }
// ELSE{
//     STATEMENT
// }

#include<iostream>
using namespace std;
int main(){
    int a;
    
    cout<<"Enter ur age";
    cin>>a;
    if(a>0 && a<100){
        cout<<"your age is "<<a;
    }
    else{
        cout<<"Not Valid";
    }
}

//WRITE A PROGRAM TO GREATEST NUMBER BETWEEN TWO
#include<iostream>
using namespace std;
int main(){
    int a,b;
    
    cout<<"Enter 1 number";
    cin>>a;
    cout<<"Enter 2 number";
    cin>>b;
    if(a>b){
        cout<<"Largest "<<a;
    }
    else{
        cout<<"Largest "<<b;
    }
}





