//A  TO Z =65-90
//a  to b=97=122


#include <iostream>
using namespace std;
int main() {
for(int i=0;i<=255;i++){
    cout<<i<<"="<<char(i)<<"\t";
}
}


//WAP TO CONVERT UPPERCASE TO LOERCASE

#include <iostream>
using namespace std;
int main() {
char c;
cout<<"enter charcacter=";
cin>>c;
if(c>=65 && c<=90){
    cout<<char (c+32);
    
}


}




