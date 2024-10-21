


#include <iostream>
using namespace std ;
int main() {
  char c,n;
  cout<<"Enter caharacter = ";
  cin>>c;
  cout<<"Enter v for or g = ";
  cin>>n;
  switch(n)
   {
      case 'v':
      case 'V':{
          if(c=='a'|| c=='e' ||c=='i' ||c=='o' || c=='u'||  c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
              cout<<"vowel";
          }
          else{
              cout<<"Constonant";
          }
          break;
      }
      case 'g':
      case 'G':{
      if(c=='m'||c=='M'){
          cout<<"Male";
      }
      else if(c=='f'||c=='F' ){
          cout<<"Female";
      }
      else{
          cout<<"other gender";
      }
      break;
       
    }
  default:{
      cout<<"Other";
    }

  
  
  }
  
}