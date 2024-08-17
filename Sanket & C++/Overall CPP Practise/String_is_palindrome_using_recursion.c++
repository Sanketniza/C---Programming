//! Create a program to check if a given string is a palindrome using recursion.

#include <iostream>
#include <string>
#include <cctype> // for tolower
using namespace std;
bool isPalindrome(const string &str, int start, int end)
{
    // Base case: If the start index crosses the end index, it means we've checked the entire string
    if (start >= end)
    {
        return true;
    }

    // Ignore non-alphabetic characters and convert characters to lowercase for comparison
    char charStart = tolower(str[start]);
    char charEnd = tolower(str[end]);

    // If the characters at start and end indexes are not equal, it's not a palindrome
    if (charStart != charEnd)
    {
        return false;
    }

    // Recur for the substring by incrementing start and decrementing end
    return isPalindrome(str, start + 1, end - 1);
}

int main()
{
    string inputString;
    cout << "Enter a string: "; 
    getline >> ( cin, inputString) ;

    // Call the recursive function to check if the input string is a palindrome
    if (isPalindrome(inputString, 0, inputString.length() - 1))
    {
        cout << inputString << " is a palindrome." << endl;
    }
    else
    {
        cout << inputString << " is not a palindrome." << endl;
    }

    return 0;
}
