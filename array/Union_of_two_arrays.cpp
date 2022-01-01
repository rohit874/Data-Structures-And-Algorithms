#include <iostream>
using namespace std;

int main() {
	int arr1[6] = {85,25,1, 32, 54, 6};
	int arr2[2] = {85, 2};
	int n1 = 6; 
	int n2 = 2;
    int count = 0;
    int arr3[n1+n2];
	for(int i =0; i<n1;i++){
         arr3[count]=arr1[i];
	    count++;
	}
    for(int i =0; i<n2;i++){
         arr3[count]=arr2[i];
	    count++;
	}
        
        for (int k= 0;k<n1+n2; k++){
        cout<<arr3[k]<<" ";
        }
        // for (int i = 0;i<n; i++){
        // cout<<arr[i]<<" ";
        // }
        
}
