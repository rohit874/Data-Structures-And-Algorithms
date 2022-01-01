#include <iostream>
using namespace std;

int sum(int a){
    int s;
    if(a==1){
    return a;
    }
    s = a + sum(a-1);
    return s;
}
int main ()
{
    int num =3;
    int k = sum(num);
    cout<<"sum of "<<num<<" num is "<<k;

}