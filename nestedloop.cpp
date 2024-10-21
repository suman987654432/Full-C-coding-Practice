//NESTED CONDITION IS ALSO CALLED INNER CONDITION WHERE WE USE MULTIPLE IF INSIDE IF CONDITION 
// SYNTAX
// if(condition){
//     if(condition){
//         code
//     }
//     else{
//         code
//     }
// }



// PASSWORD CHECK

#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
int p,o;
cout<<"Enter your password = ";
cin>>p;
if(p==5054){
  cout<<"Enter your OTP= ";
  cin>>o;
    if(o==1000){
        cout<<"owner";
    }
    
   else{
       cout<<"Not Matched";
   }
}
}

 #include <iostream>
 using namespace std;
int main() {
    int a,p;
   
    cout<<"Enter age = ";
    cin>>a;
    if(a>=18 && a<=30){
        cout<<"Enter percentage=";
        cin>>p;
        if(p>60 && p<=100){
            cout<<"Qualified";
        }
        else{
            cout<<"Not Qualified";
        }
    }
        else{
            cout<<"Not Eligiible";
        }
        
    
}

//DO YOU HAVE ADHAR CARD    else  out
//have voter card   (else)second phase not clear 3. if(pancard)
// get passport  else missing

#include<iostream>
using namespace std;
int main(){

    char a,v,p;
    cout<<"Do you have aadhar card (y/N)";
    cin>>a;
    if(a=='y' || a=='Y'){
    cout<<"Do you have votter card (y/N)";
    cin>>v;
    if(v=='y' || v=='Y'){
        cout<<"Do you have PAN card (y/N)";
        cin>>p;
        if(p=='y' || p=='Y'){
            cout<<"get passport";
        }
        else if(p=='N' || p=='n'){
            cout<<"Missing PAN card";
        }
    }
    else{
        cout<<"Second Phase Not clear";
    }
    }

    else if(a=='n' || a=='N'){
      cout<<"OUT";  
    }
}