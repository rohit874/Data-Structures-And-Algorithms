// Given an unsorted array A of size N of non-negative integers, find a continuous subarray which adds to a given number S.
#include <iostream>
using namespace std;
int main()
{
    int n = 3;
    int arr[n][n] = {{1, 5, 3}, {2, 8, 7}, {4, 6, 9}};
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                for (int l = 0; l < n; l++)
                {
                    if (arr[i][j] < arr[k][l])
                    {
                        temp = arr[i][j];
                        arr[i][j] = arr[k][l];
                        arr[k][l] = temp;
                    }
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j];
            cout << " ";
        }
        cout << "\n";
    }

    // for (int k= 0;k<n; k++){
    // cout<<arr[k]<<" ";
    // }
    // for (int i = 0;i<n; i++){
    // cout<<arr[i]<<" ";
    // }
}
