

#include <iostream>
using namespace std;

class Employee
{

public:
    int age;
    long accNum;
    string address;
    double salary;

    // Constructor Overloading : it is a constructor in which we have a multiple constructor with dmultiple paramerized with different parameter but same class nmae constructor and it;s working is different;

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

    Employee(int ag, long ac, string add)
    {
        age = age;
        accNum = ac;
        address = add;

        cout << "Constructor called" << endl;

        cout << "Employee Details : " << endl;
        cout << "Age : " << age << endl;
        cout << "Account Number : " << accNum << endl;
        cout << "Address : " << address << endl;
        cout << "Salary : " << salary << endl;
    }

    Employee(int ag, double sal)
    {
        age = age;
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
    Employee con1(20, 24000);
    Employee con2(25, 3454545433232, "Goa", 20012);
    Employee con5(46, 343434343, "Gandhi Nagar");
    Employee con6(23, 556710);
    Employee con7(51, 3434343434, "Shimla", 65220);
    Employee con8(45, 33433232, "Srinagar");
    Employee con10(34, 43434, "Gwalior", 65400);
}