#include<iostream>
using namespace std;
int main(){
int p,c,m;
cout<<"Enter Math marks = ";
cin>>m;
cout<<"Enter Physics marks = ";
cin>>p;
cout<<"Enter Chemistry marks = ";
cin>>c;
int total=m+p+c;
float per = (total/3);
if(p<0 ||c<0 ||m<0){
    cout<<"invalid";
}
else if(p<35 && c>35 && m>35){
    cout<<"Supply in Physics";
}
else if(c<35 && p>35 && m>35){
    cout<<"Supply in chemistry";
}
else if(m<35 && p>35 && c>35){
    cout<<"Supply in math";
}
else if(p<35 && c<35 && m>35){
    cout<<"Fail ";
}
else if(p>35 && c<35 && m<35){
    cout<<"Fail ";
}
else if(p<35 && c>35 && m<35){
    cout<<"Fail ";
}
else if(per>=35 && per<50 ){
    cout<<"3rd division";
    cout<<"\nPercentage is = " <<per<<"%";
    cout<<"\nTotal marks is  = "<<total;
}
else if(per>=51 && per<60){
    cout<<"2nd division";
    cout<<"\nPercentage is = " <<per<<"%";
    cout<<"\nTotal marks is  = "<<total;
}
else if (per>=60 && per<100){
    cout<<"1st division";
    cout<<"\nPercentage is = " <<per<<"%";
    cout<<"\nTotal marks is  = "<<total;
}
else{
    cout<<"\nFailed";
}

}