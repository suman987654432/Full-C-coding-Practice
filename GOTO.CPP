// GO TO STATEMENT IS CALLED TRANSFER STATEMENT WE CAN USE IT EITHER IN FORWARD DIRECTION OR BACKW0RD DIRECTION.
// IF WE DECLARE LABEL BEFORE GO TO STATEMENT IT ACTS AS A BACKWORD DIRECTION OR LOOPING .
// WHEN WE USED LABEL AFTER USING GO TO STATEMENT IT ACTS AS A FORWARD DIRECTION  OR BEHAVES LIKE EXIST.
//NOTE : - IN FORWARD DIRECTION IT WILL SKIP THE ENTIRE STATEMENT OR CODE WHICH ARE USING BETWEEN GO TO STATEMENTR AND LABEL.

//EXAMPLE OF FORWARD DIIRECTION:-
#include<iostream>
using namespace std;
int main(){
    cout<<"suman singh";
    goto king;
    cout<<"sage university";
    king:
    cout<<"singh is king";
}



#include <iostream>
using namespace std;

int main() {
    int p;
    int attempt = 0;
    int max_attempts = 3;

    start:
    cout << "Enter password: ";
    cin >> p;

    if (p == 1234) { 
        cout << "Welcome😊" << endl;
        return 0; 
    } else {
        attempt++;
        if (attempt < max_attempts) {
            cout << "Enter again 👉" << endl;
            goto start; 
        } else {
            cout << " sorry uou are Block😒" << endl;
            return 0; 
        }
    }
}



#include <iostream>
using namespace std;

int main() {
int  p,c=3;
pass:
cout<<"Enter password = ";
cin>>p;
if(p==1234){
    cout<<"Welcome";
}
else{
    c--;
    if(c>=1){
        cout<<c<<"more attempt\n";
        goto pass;
    }
    else{
        cout<<"You are blocked";
    }
}
}