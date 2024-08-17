
//! Implement a program to find the number of occurrences of a given character in a string.

/*
? To count the number of times a given character appears in a string, you can iterate through the string and  increment a variable each time the character matches the given character.
 */

#include <iostream>
#include <string>
using namespace std;


int countOccurrences(string& str, char ch) {
    int count = 0;

    /* 

    * In this case, the initialization is for (char c : str), which initializes the loop variable c with the first character of the string str. 

    ? To count the number of occurrences of a given character in a string, you can iterate through the string and  increment a variable each time the character matches the given character.
    
     */

    for (char c : str) {
        if (c == ch) {
            count++;
        }
    }
    return count;
}

int main() {
    string str = "hello sanket is my best friend ";
    char ch = 'l';

    int occurrences = countOccurrences(str, ch);

    cout << "The number of occurrences of '" << ch << "' in the string '" << str << "' is " << occurrences << endl;

    return 0;
}


