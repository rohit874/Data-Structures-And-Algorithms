#include <iostream>
#include <string>

using namespace std;
int main()
{
    int n=9, x=2;
    int arr[n] = { 1, 3, 5, 5, 5, 5, 67, 123, 125 };
    int first=-1,last=-1;
    for (int i = 0; i < n; i++)
    {
       if (x != arr[i])
            continue;
        if (first == -1)
            first = i;
        last = i;
    }
    cout<<"first:"<<first<<" last:"<<last;
    
}