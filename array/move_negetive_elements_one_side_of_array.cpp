#include <iostream>
#include<climits>
using namespace std;

int main() {
	int arr[9] = {1, 2, -3, -4, 5, -6, 7, -8, -9};
	int n = 9; 
    int temp[9];
    int j = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i]>=0)
            {
                temp[j]=arr[i];
                j++;
            }
            
        }
         for (int i = 0; i < n; i++)
        {
            if (arr[i]<0)
            {
                temp[j]=arr[i];
                j++;
            }
        }
        memcpy(arr, temp, sizeof(temp));
        
        for (int k= 0;k<n; k++){
        cout<<arr[k]<<" ";
        }        
}
