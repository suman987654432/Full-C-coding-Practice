// write a program ti following pattern
#include <iostream>
using namespace std;
int main() {
for(int r=1;r<=5;r++){
    for(int c=1;c<=r;c++){
        cout<<"*"<<"\t" ;
        }
        cout<<"/n";
}
}


// write a program ti following pattern
#include <iostream>
using namespace std;
int main() {
for(int r=1;r<=5;r++){
    for(int c=1;c<=r;c++){
        cout<<r<<"\t" ;
        }
        cout<<"\n";
}
}


// write a program ti following pattern
#include <iostream>
using namespace std;
int main() {
for(int r=1;r<=5;r++){
    for(int c=1;c<=r;c++){
        cout<<c<<"\t" ;
        }
        cout<<"\n";
}
}

// write a program ti following pattern
#include <iostream>
using namespace std;
int main() {
    int p=1;
for(int r=1;r<=5;r++){
    for(int c=1;c<=r;c++){
        cout<<p<<"\t" ;
        p++;
        }
        cout<<"\n";
}
}


// #include <iostream>
// using namespace std;
// int main() {
// for(int r=5;r>=1;r--){
//     for(int c=1;c<=r;c++){
//         cout<<"*"<<"\t" ;
//         }
//         cout<<"\n";
// }
// }

// #include <iostream>
// using namespace std;
// int main() {
// for(int r=5;r>=1;r--){
//     for(int c=1;c<=r;c++){
//         cout<<c<<"\t" ;
//         }
//         cout<<"\n";
// }
// }


#include <iostream>
using namespace std;
int main() {
    int p=1;
for(int r=5;r>=1;r--){
    for(int c=1;c<=r;c++){
        cout<<p<<"\t" ;
        p++;
        }
        cout<<"\n";
}
}

#include <iostream>
using namespace std;
int main() {
for(int r=1;r<=7;r++){
    for(int c=1;c<=r;c++){
        cout<<char(c+64)<<"\t" ;
        }
        cout<<"\n";
}
}

// #include <iostream>
// using namespace std;
// int main() {
// for(int r=1;r<=7;r++){
//     for(int c=1;c<=r;c++){
//         cout<<char(r+64)<<"\t" ;
//         }
//         cout<<"\n";
// }
// }

#include <iostream>
using namespace std;
int main() {
    int p=1;
for(int r=1;r<=5;r++){
    for(int c=1;c<=r;c++){
        cout<<char(p+64)<<"\t" ;
        p++;
        }
        cout<<"\n";
}
}


#include <iostream>
using namespace std;
int main() {
   for(int r=1;r<=3;r++){
       for(int sp=3;sp>r;sp--){
           cout<<" ";
       }
       for(int c=1;c<=r;c++){
           cout<<"*";
       }
       cout<<"\n";
   }
}


#include <iostream>
using namespace std;
int main() {
   int p=1;
   for(int r=1;r<=3;r++){
       for(int sp=3;sp>r;sp--){
           cout<<" ";
       }
       for(int c=1;c<=r;c++){
           cout<<p;
           p++;
       }
       cout<<"\n";
   }
}

task diamond shape
in square want to only border pattern

#include <iostream>
using namespace std;
int main() {
   
   for(int r=5;r<=1;r--){
       for(int sp=5;sp>r;sp--){
         cout<<" ";
       }
       for(int c=1;c<=r;c++){
       cout<<"*";
    
       }
       cout<<"\n";
   }
}
