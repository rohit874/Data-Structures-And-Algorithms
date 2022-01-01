#include <iostream>

using namespace std;
int main()
{
    int n=5;
    int arr[n] = {10, 3, 5, 6, 2};
     int P[n];
        int count =1;
        for(int i = 0; i<n;i++){
            count = 1;
         for(int j = 0; j<n;j++){
            if(j==i){
                continue;
            }
            else{
                count=count*arr[j];
            }
        }   
        P[i]=count;
        }
        for (int i = 0; i < n; i++)
        {
            cout<<P[i]<<endl;
        }
        
    
}