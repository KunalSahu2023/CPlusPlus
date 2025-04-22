
#include <iostream>
using namespace std;

class Student
{

public: // public : access specifier
    // inline : it is a function in which compiler replace the value of calling function where it is called.
    inline int add(int a, int b)
    {
        int c = a + b;
        cout << c;
        return c;
    }
};

int main()
{
    cout << "Addition :" << add(10, 30);
}