
//LOWER TO UPPER 
#include<iostream>
using namespace std;
int main()
{
    string str="hello";
    for(int i=0; i<str.length();i++)
    {
        if(str[i]>='a'&& str[i]<='z')
        {
            str[i]=str[i]-'a'+'A';
        }
    }
    cout<<str;
}


//UPPER TO LOWER
#include<iostream>
using namespace std;
int main()
{
    string str="HELLO";
    for(int i=0; i<str.length();i++)
    {
        if(str[i]>='A'&& str[i]<='Z')
        {
            str[i]=str[i]-'A'+'a';
        }
    }
    cout<<str;
}

