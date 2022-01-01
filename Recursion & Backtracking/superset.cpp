#include <iostream>
using namespace std;

void supSet(int arr[],int i, int n,int subset[],int j){
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
    supSet(arr,i+1,n,subset,j);
    subset[j]=arr[i];
    supSet(arr,i+1,n,subset,j+1);
}
int main ()
{
    int n =3;
    int arr[5]={1,2,3};
    int subset[100];
    supSet(arr,0,n,subset,0);
}