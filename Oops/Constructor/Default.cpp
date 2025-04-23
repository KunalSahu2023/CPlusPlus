
#include <iostream>
using namespace std;

class Employee
{

public:
    int age;
    long accNum;
    string address;
    double salary;

    // Constructor : it is used to initiaze the value of class member variable.

    //  Identify Constructor : it is same name as class name and it is a type of function which has no return type.

    // type of constructor : Default constructor  parameterized constructor copy constructor

    // default constructor
    Employee(void)
    {
        cout << "Default Constructor Called" << endl;
    }

    // Destructor : when the object is out of scoope then destructor is called and delete the memory of oject.

    ~Employee()
    {
        cout << "This is a Destructor" << endl;
    }
};

int main()
{
    Employee con11;
}