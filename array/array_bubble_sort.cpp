#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
        int arr[7]={8,1,12,2,27,4,5};
        int n=7;
        int temp =0;
        int counter =1;
        while (counter<n)
        {
             for (int i = 0;i<n-counter; i++){
                 if (arr[i+1]<arr[i])
                 {
                     temp = arr[i];
                     arr[i] = arr[i+1];
                     arr[i+1] = temp;
                 }
        }
        counter++;
        }
        
        for (int k= 0;k<n; k++){
        cout<<arr[k]<<" ";
        }
        // for (int i = 0;i<n; i++){
        // cout<<arr[i]<<" ";
        // }
        
}
