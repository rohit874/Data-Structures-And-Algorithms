// Given an unsorted array A of size N of non-negative integers, find a continuous subarray which adds to a given number S.
#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
        int arr[3][3];
        int n=3;
             for (int i = 0;i<n; i++){
                 for (int j = 0;j<n; j++){
                     cin>>arr[i][j];
                 }
        }
                     cout<<"original: \n";
          for (int i = 0;i<n; i++){
                 for (int j = 0;j<n; j++){
                     cout<<arr[i][j];
                     cout<<" ";
                 }
                     cout<<"\n";
        }
          for (int i = 0;i<n; i++){
              int temp = 0;
                 for (int j = i;j<n; j++){
                     temp = arr[i][j];
                     arr[i][j] = arr[j][i];
                     arr[j][i] = temp;
                 }
        }

        cout<<"after transpose: \n";
        
         for (int i = 0;i<n; i++){
                 for (int j = 0;j<n; j++){
                     cout<<arr[i][j];
                     cout<<" ";
                 }
                     cout<<"\n";
        }



        // for (int k= 0;k<n; k++){
        // cout<<arr[k]<<" ";
        // }
        // for (int i = 0;i<n; i++){
        // cout<<arr[i]<<" ";
        // }
        
}





