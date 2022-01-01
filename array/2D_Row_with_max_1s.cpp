// Given an unsorted array A of size N of non-negative integers, find a continuous subarray which adds to a given number S.
#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
        int n = 3 , m = 9;
        int arr[n][m] = {{0,0,0,1,1,1, 1, 1, 1},{0,0,0,0,1,1,1,1,1},{0,0,0,0,1,1, 1, 1, 1}};
        // int n = 3 , m = 3;
        // int arr[n][m] = {{0,0,0},{0,0,0},{0,0,0}};
        
        int maxtill = 0;
        int max=1;
        int roww = -1;
             for (int i = 0;i<n; i++){
                 max = 0;
                 for (int j = 0;j<m; j++){
                     if(arr[i][j]==1){
                         max= max+1;
                     }
                 }
            if(max>maxtill){
                maxtill = max;
                roww  = i;
            }
        }
        cout<<roww;



        // for (int k= 0;k<n; k++){
        // cout<<arr[k]<<" ";
        // }
        // for (int i = 0;i<n; i++){
        // cout<<arr[i]<<" ";
        // }
        
}





