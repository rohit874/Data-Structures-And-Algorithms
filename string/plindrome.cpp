#include<iostream>
#include<string>

using namespace std;

int main(){
    int n = 5;
    string s[n] = {"n","i","t","i","n"};
    bool checkS = true;
    for(int i=0;i<n/2;i++) {
            if (!(s[i]==s[n-1-i]))
            {
                checkS=false;
                break;
            }
            
        }
    if (checkS)
    {
                cout<<"string is palindrome";
    }
    else{
                cout<<"string not palindrome";
    }
    
    




}