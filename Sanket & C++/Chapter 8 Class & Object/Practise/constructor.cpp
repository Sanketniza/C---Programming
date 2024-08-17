#include <iostream>
#include <cstring>

using namespace std;

class Student
{
    int rollno;
    string name;

public:
    void getdata(int a, string b)
    {
        rollno = a;
        name = b;
        // strcpy(name, b);
    }

    void display()
    {
        cout << "The Roll no is: " << rollno << endl;
        cout << "The name is: " << name << endl;
    }
};

class Subject : public Student
{
    int math;
    int phy;

public:
    void setMath(int a, int b)
    {
        math = a;
        phy = b;
    }

    void showMark()
    {
        display();
        cout << "The marks of maths: " << math << endl;
        cout << "The marks of Phy: " << phy << endl;
    }
};

class result : public Subject
{
    int score;

public:
    void setScore(int a)
    {
        score = a;
    }

    void showScore()
    {
        showMark();
        cout << "The score is: " << score << endl;
    }
};

int main()
{
    result r;
    r.getdata(33, "sanket");
    r.setMath(80, 70);
    r.setScore(100);
    r.showScore();

    return 0;
}
