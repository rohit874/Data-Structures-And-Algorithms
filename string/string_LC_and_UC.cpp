#include<iostream>
#include<string>

using namespace std;

int main(){
string str = "cdcskahugkjh";
// to uppercase
for (int i = 0; i < str.length(); i++)
{
    if (str[i] >= 'a' && str[i] <='z')
    {
        str[i]-=32;
    }
    
}
 cout<<str<<endl;
 // to lowercase
for (int i = 0; i < str.length(); i++)
{
    if (str[i] >= 'A' && str[i] <='Z')
    {
        str[i]+=32;
    }
    
}
 cout<<str;

    return 0;
}