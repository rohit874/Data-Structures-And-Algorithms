#include <iostream>
using namespace std;

int fact(int a){
    if(a==1){
    return a;
    }
    return (a * fact(a-1));
}
int main ()
{
    int num =6;
    int k = fact(num);
    cout<<"factorial of "<<num<<" num is "<<k;

}