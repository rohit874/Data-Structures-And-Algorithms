#include <iostream>
using namespace std;
int main ()
{
        int arr[6]={0,-9,1,2,3,5};
        int n=6;
        const int N = 1e6+2;
        bool check[N];
        for (int i = 0; i < N; i++)
        {
                check[i]=false;
        }

        for (int j = 0; j < n; j++)
        {
                if (arr[j]>=0)
                {
                  check[arr[j]]=true;
                }
        }
        for (int k = 1; k < N; k++)
        {
                if(!check[k]){
                        cout<<k<<" ";
                        break;
                }
        }
        
        

        
        // for (int i = 0;i<n; i++){
        // cout<<arr[i]<<" ";
        // }
        
}
