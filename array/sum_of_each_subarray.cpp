#include <iostream>
using namespace std;
int main ()
{
        int arr[4]={-1,4,7,2};
        int n=4;
        int maxsum =0;
        
             for (int i = 0;i<n; i++){
                 
                 for (int j = i;j<n; j++){
                         int curr = 0;
                    for (int k = i; k <= j; k++)
                    {
                     curr += arr[k];
                     cout<<arr[k]<<" ";
                    }
                    if(curr>maxsum){
                            maxsum=curr;
                    }
                    cout<<endl;
                 }
        }
        cout<<"maxSum: "<<maxsum;
        
        // for (int k= 0;k<n; k++){
        // cout<<arr[k]<<" ";
        // }
        // for (int i = 0;i<n; i++){
        // cout<<arr[i]<<" ";
        // }
        
}
