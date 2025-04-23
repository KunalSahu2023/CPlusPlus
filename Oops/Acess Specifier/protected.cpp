
#include <iostream>
using namespace std;

class Protected

// parent class
{
protected: // protected access specifier : if we use protected then it means it can access from that class only and outside from child class.
    int age;

public:
    void setAge(int age);
    int printAge(void);
};

int Protected ::printAge(void)
{
    return age;
}

void Protected ::setAge(int ag)
{
    age = ag;
}

// child class
class Child : Protected
{

public:
    void setAge(int age);
    int printAge(void);
};

int Child ::printAge(void)
{
    return age;
}

void Child ::setAge(int ag)
{
    age = ag;
}

int main()
{
    Protected pr1;
    pr1.setAge(35);
    cout << "Parent class Age is : " << pr1.printAge() << endl;
    Child ch1;
    ch1.setAge(45);
    cout << "Child class Age : " << ch1.printAge();
}