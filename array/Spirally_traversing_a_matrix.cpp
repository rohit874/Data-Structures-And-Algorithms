#include <iostream>
using namespace std;
int main()
{

    int r = 4, c = 4;
    // 1, 2, 3, 4
    // 5, 6, 7, 8
    // 9, 10, 11, 12
    // 13, 14, 15, 16

    int matrix[r][c] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int row_start = 0;
    int row_end = r-1;
    int col_start = 0;
    int col_end = c-1;
    while (row_start <= row_end && col_start<=col_end)
    {
        for (int col = col_start; col <= col_end; col++)
        {
            cout << matrix[row_start][col] << " ";
        }
        row_start++;
        for (int row = row_start; row <= row_end; row++)
        {
            cout << matrix[row][col_end] << " ";
        }
        col_end--;
        for (int col = col_end; col >= col_start; col--)
        {
            cout << matrix[row_end][col] << " ";
        }
        row_end--;
        for (int row = row_end; row >= row_start; row--)
        {
            cout << matrix[row][col_start] << " ";
        }
        col_start++;
    }
}