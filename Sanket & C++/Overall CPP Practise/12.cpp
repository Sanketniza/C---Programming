
//! Write a program to count the number of vowels and consonants in a given string.

// #include <iostream>
#include <string>
#include <cctype> // for isalpha and tolower
using namespace std;

void conversion( string& str, int& vowelCount, int& consonantCount) {
    vowelCount = 0;
    consonantCount = 0;

    for (char ch : str) {
        // Convert character to lowercase for easier comparison
        ch = tolower(ch);

        // Check if the character is an alphabet
        if (isalpha(ch)) {
            // Check if the character is a vowel
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowelCount++;
            } else {
                consonantCount++;
            }
        }
    }
}

int main() {
    string inputString;
    cout << "Enter a string: ";
        getline(cin, inputString); //^ --> works if we have multiple words in the input string
        // cin >> inputString; //^ --> only works if we have a single word  in the input

    int vowelCount, consonantCount;
    conversion(inputString, vowelCount, consonantCount);

    cout << "Number of vowels: " << vowelCount << endl;
    cout << "Number of consonants: " << consonantCount << endl;

    return 0;
}