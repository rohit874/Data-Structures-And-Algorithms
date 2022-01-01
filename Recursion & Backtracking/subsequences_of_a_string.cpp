#include <iostream>
#include<string>
using namespace std;

void supSet(string str,int i, int n,string subset[],int j){
    if(i==n){
        int idx = 0;
    while (idx<j)
    {
        cout<<subset[idx]<<" ";
        ++idx;
    }
    cout<<endl;
    return;
    }
    supSet(str,i+1,n,subset,j);
    subset[j]=str[i];
    supSet(str,i+1,n,subset,j+1);
}
int main ()
{
    int n =3;
    string str="ABC";
    string subset[100];
    supSet(str,0,n,subset,0);
}