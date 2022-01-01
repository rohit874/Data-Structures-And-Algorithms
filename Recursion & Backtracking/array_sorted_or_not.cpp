#include <iostream>
using namespace std;

bool sorted(int arr[], int n){
    if(n==1){
    return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    return sorted(arr+1,n-1);
}
int main ()
{
    int n =5;
    int arr[5]={1,2,3,4,5};
    bool IsSorted = sorted(arr, n);
    if(IsSorted){
    cout<< "Array is sorted";
    }
    else{
    cout<< "Array is unsorted";
    }
}