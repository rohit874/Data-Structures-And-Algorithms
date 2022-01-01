#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
        int arr[7]={8,10,12,21,27,34,42};
        int n=7;
        int first =0;
        int last =n;
        int num =34;
        while (first<=last)
        {
               int mid =(first+last)/2;
               if (arr[mid]==num)
               {
                      cout<<mid;
                      return mid;
               }
               else if (arr[mid]>num)
               {
                       last=mid-1;
               }
               else{
                       first=mid+1;
               }
               
        }
        return -1;
        cout<<"not found;";
        



        // for (int i = 0;i<n; i++){
        // cout<<arr[i]<<" ";
        // }
        
}
