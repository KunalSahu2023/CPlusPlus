
#include <iostream>
using namespace std;

// pointer in Structure

class Employee
{

public:
    int id;
    string name;
    int yearOfJoining;
    string address;

    void display()
    {
        cout << "Address : " << address << endl;
    }
};

int main()
{
    Employee emp1;
    Employee *emp; // pointer hold the address of another variable.
    emp = &emp1;

    emp->address = "Goa"; // in Pointer to access properties of class template use arrow operator ( -> ) insted of dot ().).

    // cout << "Address : " << emp->address << endl;

    emp->display();
    cout << "Address : " << emp->id;
}