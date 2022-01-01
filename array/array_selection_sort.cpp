#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
        int arr[7]={8,2,12,1,27,4,5};
        int n=7;
        int temp =0;
         for (int i = 0;i<n-1; i++){
             for (int j = i+1;j<n; j++){
                 if (arr[j]<arr[i])
                 {
                     temp = arr[j];
                     arr[j] = arr[i];
                     arr[i] = temp;
                 }
        }
         for (int k= 0;k<n; k++){
        cout<<arr[k]<<" ";
        }
        cout<<"\n";
        
        }
       
        



        // for (int i = 0;i<n; i++){
        // cout<<arr[i]<<" ";
        // }
        
}
