
//! Implement a program to check if a given number is prime or not.

#include <iostream>
using namespace std;

int main()
{

    int n, i, j, flag = 0;
    cout << "Enter the number" << endl;
    cin >> n;
    
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "The number is not prime" << endl;
    }
    else
    {
        cout << "The number is prime" << endl;

        return 0;
    }
}

/*
   #include <iostream>
#include <cmath>

bool is_prime(int n) {
   if (n <= 1) {
       return false;
   }
   for (int i = 2; i <= std::sqrt(n) + 1; ++i) {
       if (n % i == 0) {
           return false;
       }
   }
   return true;
}

int main() {
   int number;
   std::cout << "Enter a number: ";
   std::cin >> number;

   if (is_prime(number)) {
       std::cout << "It is a prime number." << std::endl;
   } else {
       std::cout << "It is not a prime number." << std::endl;
   }

   return 0;
}
 */