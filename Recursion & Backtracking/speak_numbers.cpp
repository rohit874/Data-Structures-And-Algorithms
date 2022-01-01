#include <iostream>
#include<string.h>
using namespace std;
void speak(int n,string num[]){
    if(n==0){
        return;
    }
    
      speak(n/10,num);
             cout<<num[n%10]<<" ";
     
} 
int main ()
{
    string num[10] ={"zero","one","two","three","four","five","six","seven","eight","nine"}; 
    speak(125,num);
}