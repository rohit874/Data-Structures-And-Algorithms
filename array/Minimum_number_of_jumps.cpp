#include <iostream>
using namespace std;

int main()
{
    // int n = 6;
    // int arr[n] = {1, 4, 3, 2, 6, 7};
    // int num = 7;
    int n = 11;
    int arr[n] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    int i = 0;
    int jump = 0;
    for (i = 0; i < n; i++)
    {
        int count=0;
        int j = arr[i];
        while (count<j)
        {
            cout<<count<<endl;
            if (arr[i+count]==0 || i+count>n)
            {
                break;
                // return -1;
            }
            count++;
        }
        i=count + i;
        jump++;
    }
    cout<<jump<<"kjhgh";

    // for (int i = 0;i<n; i++){
    // cout<<arr[i]<<" ";
    // }
}
