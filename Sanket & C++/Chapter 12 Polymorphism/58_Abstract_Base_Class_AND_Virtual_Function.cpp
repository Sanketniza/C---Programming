
/* -------------------------------------------------------------------------- */
/*     57      //!  Abstract base class and virtual function                   */
/* -------------------------------------------------------------------------- */


//? Theory for Abstract base class and virtual function
// todo:   1) pure virtual function is used to create the abstract base class
// todo:   2) 𝘈𝘣𝘴𝘵𝘳𝘢𝘤𝘵 𝘣𝘢𝘴𝘦 𝘤𝘭𝘢𝘴𝘴 -> Its is create for run another derived class  from this class 
// todo:   3) 𝗔𝗯𝘀𝘁𝗿𝗮𝗰𝘁 𝗯𝗮𝘀𝗲 𝗰𝗹𝗮𝘀𝘀 -> It is an class where you are not use this class to make the object from this class . We not creating the object of this class
// todo:   4) In Abstract base class - Atleast one pure virtual function is present.
// todo:   5) Both pure virtual functions and abstract base class are related to each other

#include <iostream>
#include <cstring>
using namespace std;

class CWH
{

protected:
    string title;
    float rating;

public:
    CWH(string s, float r) //^ constructor...
    {
        title = s;
        rating = r;
    }

    virtual void display() = 0;   //^:- pure virtual function --> do nothing function
};

class CWHVideo : public CWH
{

protected:
    float VideoLenght;

public:
    CWHVideo(string s, float r, float vi) : CWH(s, r) //^ constructor with Initialization list
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
    CWHText(string s, float r, int wc) : CWH(s, r)  //^ constructor with Initialization list
    {
        words = wc;
    }

    void display()
    {
        cout << "2. This is an amazing text tutorial with title " << title << endl;
        cout << "Ratting of the text tutorial is : " << rating << " out of 5" << endl;
        cout << "No of words in this text tutorial is : " << words << " minutes" << endl;
    }
};

int main()
{

    string title;
    float rating, videolenght;
    int words;

    // for CodeWithHarry Video
    title = "sanket to call is called : ";
    videolenght = 4.56;
    rating = 4.89;
    CWHVideo sanket(title, rating, videolenght);
    // sanket.display();

    // for code with harry Text
    title = "sanket has another text tutorial";
    words = 456;
    rating = 4.89;
    CWHText sanket1(title, rating, words);
    // sanket1.display();

    CWH *tuts[2];
    tuts[0] = &sanket;
    tuts[1] = &sanket1;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}