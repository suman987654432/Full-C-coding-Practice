
#include <iostream>
using namespace std;
int dsc(int n){
    if(n==0){
        return 0;
    }
    
    dsc(n-1); 
    cout<<n<<"\t";//head recursion
}
int main() {
 dsc(5);
}


#include <iostream>
using namespace std;
int dsc(int n){
    if(n==0){
        return 0;
    }
    cout<<n<<"\t";
       dsc(n-1); //tail recursion
}
int main() {
 dsc(5);
}