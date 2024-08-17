
  /* -------------------------------------------------------------------------- */
  /*                   61 //! File Reading and Writing in cpp                   */
  /* -------------------------------------------------------------------------- */
      
  #include<iostream>
  #include<fstream>  // add this library
  using namespace std;

  /* 
   ^   The useful classes for working with file in c++ are:
        todo: 1) fstream
        todo: 2) ifstream --> derived from fstream base
        todo: 3) ofstream --> derived from fstream base


        ? In order work with files in c++ , you will have to open it. Primary , there are 2 way to open a file :
          todo: 1) Using constructors
          todo: 2) Using ther member functions open() of the class.
   */

  int main() {
      string st = "sanket is my name";
      string st2;

      //^ Opening file using constructor and writing constructor (it)

        ofstream out("sanket.txt"); // write operation 
        out<<st;
        //& here by performing above operations , its creating a sanket456.txt file in folder list. and that file "sanket is my name" is seen.......

      //^ Opening file using constructor and reading constructor.

      ifstream in("sanket.txt"); // read operation
      in >> st2;
      getline(in, st2);
      cout<<st2;

    return 0;
  }
