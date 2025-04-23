
#include <iostream>
using namespace std;

class Private
{
private: // private access specifier : if we use private then it means it can access from that class only.
    int age;

public:
    void setAge(int age);
    int printAge(void);
};

int Private ::printAge(void)
{
    return age;
}

void Private ::setAge(int ag)
{
    age = ag;
}

int main()
{
    Private pr1;
    pr1.setAge(35);
    cout << "Age is : " << pr1.printAge();
}