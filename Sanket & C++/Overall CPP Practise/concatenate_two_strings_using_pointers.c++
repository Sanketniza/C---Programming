
//! Write a program to concatenate two strings using pointers.

#include <iostream>
#include <string>
using namespace std;

int main()
{
  char str1[11] = "Hello";
  char str2[] = "World";

  // Declare a pointer to the first string
  char *pStr1 = str1;

  // Iterate over the second string and append each character to the first string
  while (*pStr1)
    pStr1++;
  char *pStr2 = str2;

  while (*pStr2)
  {
    *pStr1++ = *pStr2++;
  }

  // Add the null terminator to the end of the concatenated string
  *pStr1 = '\0';

  // Print the concatenated string
  cout << str1 << endl;

  return 0;
}

