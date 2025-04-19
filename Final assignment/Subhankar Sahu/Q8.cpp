#include <iostream>
using namespace std;
int main()
{
    string str;
    bool isPalindrome = true;
    cout << "Enter a string: ";
    getline(cin, str);
    int start = 0;
    int end = str.length() - 1;
    while (start < end) 
    {
        if (str[start] != str[end]) 
        {
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome)
        cout << "The string is a palindrome." << endl;
    else
        cout << "The string is not a palindrome." << endl;

    return 0;
}
