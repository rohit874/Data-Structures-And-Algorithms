// Given an unsorted array A of size N of non-negative integers, find a continuous subarray which adds to a given number S.
#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
        int arr[5]={1,2,3,7,5};
        int n=5;
        int curr =0;
        int S= 12;
             for (int i = 0;i<n; i++){
                 curr = 0;
                 for (int j = i;j<n; j++){
                     curr += arr[j];
                     if (curr==S){
                     cout<<i+1<<" "<<j+1<<endl;
                     }
                     
                 }
            
        }
        
        // for (int k= 0;k<n; k++){
        // cout<<arr[k]<<" ";
        // }
        // for (int i = 0;i<n; i++){
        // cout<<arr[i]<<" ";
        // }
        
}





