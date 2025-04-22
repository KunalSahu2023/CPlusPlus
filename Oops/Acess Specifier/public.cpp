
#include <iostream>
using namespace std;

// parent class or super class

class Public
{

public: // public access specifier : if we use public then it means it can access from anyfolder and any class.
    int age;
    string color;
    int rollNo;

    void show()
    {
        cout << "Age : " << age << endl;
    }
};

class Publictwo : public Public
{
    // child class or derived class or sub class
};

int main()
{
    cout << "This is a public Access Specifier" << endl;
    Public p1;
    Public p2;
    p1.age = 20;
    p2.age = 23;
    p1.show();
    p2.show();

    Publictwo pp1;
    pp1.age = 34;
    pp1.show();
}