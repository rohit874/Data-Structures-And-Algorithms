#include <iostream>
#include <string>

using namespace std;
int main()
{
    string str = "aaaabbaa";
    int maxLength = 1, start = 0;
 
    // Nested loop to mark start and end index
    for (int i = 0; i < str.length(); i++) {
        for (int j = i; j < str.length(); j++) {
            int flag = 1;
 
            // Check palindrome
            for (int k = 0; k < (j - i + 1) / 2; k++)
                if (str[i + k] != str[j - k])
                    flag = 0;
 
            // Palindrome
            if (flag && (j - i + 1) > maxLength) {
                start = i;
                maxLength = j - i + 1;
            }
        }
    }
    cout << "Longest palindrome substring is: ";
    for (int  i= start; i <= start + maxLength - 1; i++)
    {
        cout<<str[i];
    }
    cout<<endl<<"lenght is: "<<maxLength;
}