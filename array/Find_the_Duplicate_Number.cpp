#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int arr[n] = {3, 1, 2, 4, 2};
    int arr2[n];
    int i = 0;
    for (i = 0; i < n; i++)
    {
        arr2[i] = 0;
    }
    for (i = 0; i < n; i++)
    {
        arr2[arr[i]] = arr2[arr[i]] + 1;
    }
    for (i = 0; i < n; i++)
    {
        if (arr2[i] >= 2)
        {
            cout << i;
            break;
        }
    }
    return i;

    // for (int i = 0;i<n; i++){
    // cout<<arr[i]<<" ";
    // }
}
