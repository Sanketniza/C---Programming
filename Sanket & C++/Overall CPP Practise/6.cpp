
 //! Implement a program to check if a given string is a palindrome.
#include <iostream>
#include <string>

bool palindrome(const std::string& str) {
    int n = str.length();
    for (int i = 0; i < n / 2; ++i) {
        if (str[i] != str[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    if (palindrome(input)) {
        std::cout << "The string is a palindrome." << std::endl;
    } else {
        std::cout << "The string is not a palindrome." << std::endl;
    }

    return 0;
}

/* 
output :-
 Enter a string: sanket
The string is not a palindrome.

Enter a string: pop
The string is a palindrome. 

*/