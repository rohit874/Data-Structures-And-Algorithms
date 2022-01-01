#include <iostream>
using namespace std;

int main() {
	int arr[8] = {1, 2, 0, 7, 2, 0,2,7};
	int n = 8;
	int rb = arr[0]; 
	for(int i =1; i<n;i++){
	    if(arr[i]>rb && arr[i]>arr[i+1]){
	        cout<<arr[i]<<endl;
			rb=arr[i];
	    }
	}
	return 0;
        
        // for (int k= 0;k<n; k++){
        // cout<<arr[k]<<" ";
        // }
        // for (int i = 0;i<n; i++){
        // cout<<arr[i]<<" ";
        // }
        
}
