#include <iostream>
#include <string>
using namespace std;

class One
{
public:
    virtual void intro()
    {
        cout << "I am One" << endl;
    }
};

class Two : public One
{
public:
    void intro()
    {
        cout << "I am Two" << endl;
    }
};

class Three : public One
{
public:
    void intro()
    {
        cout << "I am Three" << endl;
    }
};

int main()
{
    One *a;
    Two b;
    Three c;

    a = &b;
    a->intro();

    a = &c;
    a->intro();
    return 0;
}
