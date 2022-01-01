#include <iostream>
#include <string>

using namespace std;
int main()
{

    string str = "3322251";
   for (int i = 0; i < str.length(); i++)
   {
       int count =0;
       char word = str[i];
     for (int j = i; j < str.length(); j++)
   {
       if (str[i]==str[j])
       {
           count++;
       }
       else{
           i=j-1;
           break;
       }
   }
           cout<<count<<" "<<word<<endl;
   }
   //incomplete program
    
}