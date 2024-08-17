
/* -------------------------------------------------------------------------- */
/*     57      //!          virtual functions example                       */
/* -------------------------------------------------------------------------- */

//? Theory for the virtual function
// todo:   1) They cannot be static . 
// todo:   2) They are accessed by object pointers
// todo:   3) Virtual functions can be a friend of another class
// todo:   4) A virtual function in vase class might not be used
// todo:   5) If a virtual function is defined in a base class , there is no necessity of redefining it in the derived class

#include <iostream>
#include <cstring>
using namespace std;

class CWH
{

protected:
    string title;
    float rating;

public:
    CWH(string s, float r) //^ Parameterized constructor 
    {
        title = s;
        rating = r;
    }


    virtual void display() {}
 /*    virtual void display() {
        cout << endl;
        cout << "Loading";
    } */

     /* void display() {
        cout << endl;
        cout << "Loading";
    }   */   
    //todo: we are going to print the display function , its print two times at the last of compilation .check it 
};

class CWHVideo : public CWH
{

protected:
    float VideoLenght;

public:
//* Constructor ......
    CWHVideo(string s, float r, float vi) : CWH(s, r)  // ^ Initialized list ..
      // ^ Initialized list is possible only for Constructor....
    {
        VideoLenght = vi;
    }

    void display()
    {
        cout << "1.This is an amazing video with title " << title << endl;
        cout << " Ratting of the video is : " << rating << " out of 5" << endl;
        cout << " Length of this video is : " << VideoLenght << " minutes" << endl
             << endl
             << endl;
    }
};

class CWHText : public CWH
{
    int words;

public:
//* constructor ......
    CWHText(string s, float r, int wc) : CWH(s, r) // remember one at the time of assigning the value , give value  in 
    //^ Only for ⁡⁢⁢⁢𝗖𝗼𝗻𝘀𝘁𝗿𝘂𝗰𝘁𝗼𝗿𝘀⁡ we can use InitializedList (: (a,b))
    {
        words = wc;
    }

    void display()
    {
        cout << "2. This is an amazing text tutorial with title " << title << endl;
        cout << "*) Ratting of the text tutorial is : " << rating << " out of 5" << endl;
        cout << "*) No of words in this text tutorial is : " << words << " minutes" << endl;
    }
};

int main()
{
    string title;
    float rating, videolenght;
    int words;

    // for CodeWithHarry Video
    title = "sanket with chia ..";
    videolenght = 4.56;
    rating = 4.89;
    CWHVideo sanket(title, rating, videolenght); //& Assigning the value to constructor..
    sanket.display();

    // for code with harry Text
    title = "sanket has another text tutorial";
    words = 456;
    rating = 4.89;
    CWHText sanket1(title, rating, words);
    sanket1.display();

    CWH *tuts[2];
    tuts[0] = &sanket;
    tuts[1] = &sanket1;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}