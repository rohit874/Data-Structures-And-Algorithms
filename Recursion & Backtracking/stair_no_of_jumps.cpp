#include <iostream>
using namespace std;

int stairJumps(int n){
    if(n<0){
    return 0;
    }
    if(n==0){
    return 1;
    }
    return stairJumps(n-1)+stairJumps(n-2)+stairJumps(n-3);
}
int main ()
{
    int n =4;
    cout<<"num_of_jumps: "<<stairJumps(n);
}