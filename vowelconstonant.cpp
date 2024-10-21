#include <iostream>
using namespace std;

int main() {
    char a;
    cout << "Enter an alphabet = ";
    cin >> a;

    
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || 
        a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U') {
        cout << "Character is a vowel";
    } else {
        cout << "Character is a consonant";
    }

    return 0;
}



//WRITE A PROGRAM TO CHECK LETTER IS SMALL OR CAPITAL
#include<iostream>
using namespace std;
int main(){
    char a;
    cout<<"Enter alphabet = ";
    cin>>a;

    if(a>=65 && a<=90){
        cout<<"it is capital"
    }else{
        cout<<"it is small";
    }
}