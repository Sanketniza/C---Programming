/*
#include <iostream>
using namespace std;

class student
{

    int roll_no;

public:
    void set_roll(int);
    void get_roll(void);
};

void student ::set_roll(int r)
{
    roll_no = r;
}

void student ::get_roll(void)
{
    cout << " The Roll NO is :" << roll_no << endl;
}

class exam : public student
{
    float math;
    float physics;

public:
    void set_mark(float, float);
    void get_mark(void);
};

void exam ::set_mark(float m1, float m2)
{
    math = m1;
    physics = m2;
}

void exam ::get_mark(void)
{
    cout << " The marks of Maths are :" << m1 << endl;
    cout << " The marks of Physics are :" << m2 << endl;
}

class result : public exam
{

    // float percentage;
public:
    void display();
};

void result ::display()
{
    get_roll();
    get_mark();
    cout << "The percentage is : " << (math + physics) / 2 << " % " << endl;
}

int main()
{
    result sanket;
    sanket.set_roll(40);
    sanket.set_mark(24.2, 25.4);
    sanket.display();
    return 0;
} */


#include <iostream>
using namespace std;

class student
{
private:
    int roll_no;

public:
    void set_roll(int);
    void get_roll(void);
};

void student::set_roll(int r)
{
    roll_no = r;
}

void student::get_roll(void)
{
    cout << "The Roll NO is :" << roll_no << endl;
}

class exam : public student
{
private:
    float math;
    float physics;

public:
    void set_mark(float, float);
    void get_mark(void);
    float get_math() { return math; }
    float get_physics() { return physics; }
};

void exam::set_mark(float m1, float m2)
{
    math = m1;
    physics = m2;
}

void exam::get_mark(void)
{
    cout << "The marks of Maths are :" << math << endl;
    cout << "The marks of Physics are :" << physics << endl;
}

class result : public exam
{
public:
    void display();
};

void result::display()
{
    get_roll();
    get_mark();
    cout << "The percentage is : " << (get_math() + get_physics()) / 2 << " % " << endl;
}

int main()
{
    result sanket;
    sanket.set_roll(40);
    sanket.set_mark(24.2, 25.4);
    sanket.display();

return 0;
}
