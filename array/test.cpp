#include <iostream>
using namespace std;
int main()
{
int n1 = 6; 
int A[n1] = {1, 5, 10, 20, 40, 80};
int n2 = 5; 
int B[n2] = {6, 7, 20, 80, 100};
int n3 = 8; 
int C[n3] = {3, 4, 15, 20, 30, 70, 80, 120};
        for(int i=0; i<n1;i++){
                 for(int j=0; j<n2;j++){
                if(A[i]==B[j]){
                     for(int k=0; k<n3;k++){
                     if(B[j]==C[k]){
                         cout<<C[k];
                     }
            }
                }
                    
                }
            
                
            }

        // for (int k = 0; k < n; k++)
        // {
        //         cout << arr[k][0] << "," << arr[k][1] << " "
        //                                                  " ";
        // }
        // for (int i = 0;i<n; i++){
        // cout<<arr[i]<<" ";
        // }
}
