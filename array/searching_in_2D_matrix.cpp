#include <iostream>
using namespace std;
int main()
{
    int matrixSize = 3;
    int matrixColSize = 4;
    int target = 60;
    int matrix[matrixSize][matrixColSize] = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int r = 0;
    int n = matrixSize;
    int c = matrixColSize-1;
    bool found = false;
    while (r<n && c>= 0)
    {
        if (matrix[r][c] == target)
        {
            found =true;
            cout<<"found at :"<<r<<" "<<c;
        }
        if (matrix[r][c]>target)
        {
            c--;
        }
        else{
            r++;
        }
    }
    cout<<found;
}