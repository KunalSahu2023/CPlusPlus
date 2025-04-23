
#include <iostream>
using namespace std;

class Employee
{

public:
    int age;
    long accNum;
    string address;
    double salary;

    // parameterized constructor : it is type of constructor in which we give the parameter.

    Employee(int ag, double ac, string add, double sal)
    {
        age = ag;
        accNum = ac;
        address = add;
        salary = sal;

        cout << "Constructor called" << endl;

        cout << "Employee Details : " << endl;
        cout << "Age : " << age << endl;
        cout << "Account Number : " << accNum << endl;
        cout << "Address : " << address << endl;
        cout << "Salary : " << salary << endl;
    }
};

int main()
{
    Employee con2(25, 3454545433232, "Goa", 20012);
    Employee con3(30, 423232232, "Panaji", 34560);
    Employee con9(60, 4354545, "Gondwana", 54670);
    Employee con10(34, 43434, "Gwalior", 65400);
}