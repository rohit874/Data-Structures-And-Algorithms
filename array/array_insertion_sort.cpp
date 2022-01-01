#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
        int arr[7]={8,1,12,2,27,4,5};
        int n=7;
        int temp =0;
        int counter =1;
        
             for (int i = 1;i<n; i++){\
             int current = arr[i];
             int j = i-1;
                 while (arr[j]>current && j>=0)
                 {
                     arr[j+1] = arr[j];
                     j--;
                 }
                 arr[j+1]=current;
        }
        
        for (int k= 0;k<n; k++){
        cout<<arr[k]<<" ";
        }
        // for (int i = 0;i<n; i++){
        // cout<<arr[i]<<" ";
        // }
        
}
