#include <iostream>
using namespace std;
int main()
{
    int n1 = 4;
    int n2 = 5;
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {0, 2, 6, 8, 9};

    for (int i = 0; i < n1; i++)
    {
        int temp = 0;
        for (int j = 0; j < n2; j++)
        {
            if (arr1[i] > arr2[j])
            {
                temp = arr1[i];
                arr1[i] = arr2[j];
                arr2[j] = temp;
            }
        }
    }

    // int temp = 0;
    // int counter = 1;
    // for (int i = 1; i < n2; i++)
    // {
    //     int current = arr2[i];
    //     int j = i - 1;
    //     while (arr2[j] > current && j >= 0)
    //     {
    //         arr2[j + 1] = arr2[j];
    //         j--;
    //     }
    //     arr2[j + 1] = current;
    // }

    for (int i = 0; i < n1; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n2; i++)
    {
        cout << arr2[i] << " ";
    }
}
