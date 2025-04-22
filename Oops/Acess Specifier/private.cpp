
#include <iostream>
using namespace std;

class Private
{
    int age;

public:
    void setAge(int age);
    int printAge(void);
};

void Private ::setAge(int age)
{
    age = age;
}
int Private :: printAge(void)
{
    return age;
}

int main()
{
    Private pr1;
    pr1.setAge(35);
    cout << "Age : " << pr1.printAge();
}