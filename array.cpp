//ARRAY = IT IS A colection SIMILAR KINDS OF DATA.
//IT STORES THE DATA SEQUENTALY .
//INDEXING OF DATA STORE START FROM 0.
//ACCESS AND SEARCHING FAST.
// user defined data type ya non-primitive datatype
//THERE ARE TWO TYPES OF ARRAY 
  //   1.NUMERIC ARRAY 
 //    2.ASSOCIATIAVE ARRAY


 //TYPES OF NUMERIC ARRAY 
    // 1. ONR DIMENSION
    // 2.TWO DIMENSION3.
    // 3.MULTI DIMESNION
    //ONE DIMENSIONAL ARRAY:--
    // 1. INA ASINGLE DIMESNDSION ARRAY THERE IS ONLLY ONE SUBSCRIPT [] .
    //2.  WE CAN STOTRE THE DATA SEQUNTIALLY IN THIS ARRAY.
    //3.  INDEX WIL START FROM 0.
// user defined data type ya non-primitive datatype.
//WE CAN CREATE  STATIC ARRAY AS WELL AS DYNAMIC ARRAY.

//SYNTAX
// datatype arrayname[size];
// example

//FIND LENGTH OF AN ARRAY

#include <iostream>
using namespace std;
int main() {
int cybrom[4]={56,78,98,87};
int s=sizeof(cybrom)/sizeof(cybrom[0]);
for(int i=0;i<s;i++){
    cout<<cybrom[i]<<"\t";
}
}




#include <iostream>
using namespace std;
int main() {
int arr[5];
cout<<"enter numberv ";
for(int i=0;i<5;i++){
   cin>>arr[i]; 
}
cout<<"stored numberv is ";
for(int i=0;i<5;i++){
   cout<<arr[i]<<"\t";
}
}    