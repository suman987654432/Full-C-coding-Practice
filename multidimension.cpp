#include<iostream>
using namespace std;
int main(){
    int a[3][3];
    int r,c,sum=0;
    cout<<"Enter number = ";
    for(r=0;r<=2;r++){
        for(c=0;c<=2;c++){
            cin>>a[r][c];
        }
    }
    cout<<"output is \n";
     for(r=0;r<=2;r++){
        for(c=0;c<=2;c++){
           sum=sum+a[r][c];
           sum++;
        }
       cout<<"\n";
     }
     cout<<sum<<"\t";
}
write a proggramm to add value of two array according respective  column


#include<iostream>
using namespace std;
int main(){
    int a[3][3];
    int r,c,sum=0;
    cout<<"Enter number = ";
    for(r=0;r<=2;r++){
        for(c=0;c<=2;c++){
           
        }
        cout<<[r][c];
        
    }
    cout<<"output is \n";
     for(r=0;r<=2;r++){
        for(c=0;c<=2;c++){
          cout<<[c][r]<<"\t";
        }
       cout<<"\n";
     }
     
}





sum array#include<iostream>
using namespace std;
int main(){
    int a[3][3];
    int b[3][3];
    int r,c;
    cout<<"Enter number = ";
    for(r=0;r<=2;r++){
        for(c=0;c<=2;c++){
           cin>>a[r][c];
        }
    }
     cout<<"Enter number = ";
    for(r=0;r<=2;r++){
        for(c=0;c<=2;c++){
           cin>>b[r][c]<<"\t";
        }
    }

 
    for(r=0;r<=2;r++){
        for(c=0;c<=2;c++){
           cout<<b[r][c]+a[r][c]<<"\t";
        }
    }
}


suma
#include<iostream>
using namespace std;
int main(){
    int a[3][3]={2,3,4,5};
    int b[3][3]={2,3,1,5};
    int r,c;
    for(r=0;r<2;r++){
        for(c=0;c<2;c++){
            if(a[r][c]%2==0)
            {
                cout<<a[r][c]+b[r][c]<<"\t";
            }
        else
        {
          cout<<a[r][c]-b[r][c]<<"\t";  
        }
        
        }
        cout<<"\n";
}
}


// convert 0 with -1
#include<iostream>
using namespace std;
int main(){
    int i,j;
    int a[]={4,0,4,0,5,6};
    int s=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<s;i++){
        if(a[i]==0){
        a[i]=-1;
        }
    }
    cout<<"modified";
    for(int i=0;i<s;i++){
        cout<<a[i]<<"\t";
    }

   
}