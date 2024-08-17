
 /* -------------------------------------------------------------------------- */
 /*                62 //! File input ouput in cpp Read and write               */
 /* -------------------------------------------------------------------------- */

/* 
 Theory


   ! c++ : File I/O [ Reading and writing to a file]

    * Three useful classes
      todo: 1) fstream base
      todo: 2) istream base --> Derived form fstream base
      todo: 3) ofstream base --> Derived form ofstream base


    ? Read operations
             ifstream in ("xyz.txt");
             string st;
             in >> std ; // just like cin

    ? Write operations
           ofstream out("xyz.txt");
           string st = "sanket";
           out >> std ; // writes to file xyz.txt
        
*/
/* 
  #include<iostream>
  #include<fstream>
  using namespace std;

    int main() {
        // connecting our file with s stream
        ofstream s("sanket123.txt");

        // Creating a name string and filling it with the string entered by the user 
        cout << "enter your name : ";
        string name;
        cin >> name;

       // writing a string to the file
        s<<"my name is " << name;

        s.close();     // closing the file

 // todo: example 2
        // ifstream s1("sanket.txt");
        // string content;
        // s1>>content;
        // cout<<"the content of the file is : "<<content;
        // s1.close();
    }
 */





#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string line;
    ifstream my("sanket.txt");
    if (my.is_open())
    {
        while (getline(my, line))
        {
            cout << line << '\n';
        }
        my.close();
    }
    else
    {
        cout << "Unable to open file";
    }

    ofstream my2("sanket1.txt");
    my2 << "Writing this to a file.";
    my2.close();

    return 0;
} 