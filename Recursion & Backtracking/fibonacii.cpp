#include <iostream>
using namespace std;

int fab(int a){
    if(a==1 || a==2){
    return 1;
    }
    return (fab(a-1) + fab(a-2));
}
int main ()
{
    // for print nth term
    int num =6;
    int k = fab(num);
    cout<<"nth term is "<<k<<endl;
    // print fibonacii series
    for (int i = 1; i < 10; i++)
    {
        cout<<" "<<fab(i);
    }
    

}