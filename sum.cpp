#include<iostream>
using namespace std;

int main() {
    int sum = 0;
    int i = 1;
    do {
        sum += i;
        i++;
    } while (i <= 10);
    cout << "Sum is = " << sum << endl;
    return 0;
}


#include<iostream>
using namespace std;

int main() {
    int n,fact=1;

    cout<<"Enter  number= ";
    cin>>n;
    do{
        
      fact =fact*n;
        n--;
        
    }while(n>=1);
    cout<<fact;
}


// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
  int b,n,r=1,i=0;
  cout<<"Enter base= ";
  cin>>b;
  cout<<"Enter number = ";
  cin>>n;
  do{
     r*=b;
     i++;
  }while(i<n);
  cout<<r;

}






////sum of digit 

#include <iostream>
using namespace std;

int main() {
     long int n, sum = 0;
    cout << "Enter number = ";
    cin >> n;
    while (n > 0) {
        int d = n % 10; 
       sum=sum+d;       
        n /= 10;            
    }
    cout << "Sum of digits = " << sum <<endl;
    
}
return 0;
}


//SUM OF DIGIT FIRST OR LAST


#include <iostream>
using namespace std;

int main() {
     long int n,sum, last,first;
    cout << "Enter number = ";
    cin >> n;
    last=n%10;
    first=n;
    while (first >=10){
       first=first/10;
       
       sum=first+last;        
    }
    
    
    cout << "Sum of digits = " << sum << endl;
    
}
 
 
 int a,f,s;
 cout<<"enter number";
 cin>>a;
 f=a%10;
 while(a>0){
     s=a%10;
     a=a/10;
 }
 cout<<f+s;
 
 


