// IN A TWO DIMENSION ARRAY WE USED 2 SUBSCRIPT [][] THE FIRST [] IS ROW AND SECOND[] IS COLOUMN.
// WE ALWAYS USED TWO  NESTED LOOPS FOR TWO DIMESNION ARRAY WHERE THE FIRST LOOP IS USED FOR ROW AND SECOND IS COLUMN.

#include<iostream>
using namespace std;
int main(){
    int a[2][3];
    int r,c;
    cout<<"Enter nummber = ";
    for(r=0;r<=1;r++){
        for(c=0;c<=2;c++){
            cin>>a[r][c];
        }
    }
    cout<<"output is \n";
     for(r=0;r<=1;r++){
        for(c=0;c<=2;c++){
            cout<<a[r][c]<<"\t";
        }
       cout<<"\n";
     }
    
}




//EXAMPLE 2  change where 0 to -1
#include<iostream>
using namespace std;
int main(){
    int a[3][3];
    int r,c;
    cout<<"Enter number = ";
    for(r=0;r<=2;r++){
        for(c=0;c<=2;c++){
            cin>>a[r][c];
        }
    }
    cout<<"output is \n";
     for(r=0;r<=2;r++){
        for(c=0;c<=2;c++){
            if(a[r][c]==0){
                a[r][c]=-1;
            }
            cout<<a[r][c]<<"\t";
        }
       cout<<"\n";
     }
    
}

