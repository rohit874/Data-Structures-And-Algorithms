#include<iostream>
#include<string>

using namespace std;

int main(){
    int n = 5;
    string s[n] = {"h","e","l","l","o"};
    for(int i=0;i<n/2;i++) {
            string ch = s[i];
            s[i] = s[n-1-i];
            s[n-1-i] = ch;
        }
    for (int i = 0; i < n; i++)
    {
        cout<<s[i];
    }
    




}