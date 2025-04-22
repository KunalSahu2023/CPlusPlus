
#include <iostream>
using namespace std;

class Student
{

public: // public : access specifier
        // static: create object copy onl one times in the memory and shared by all object.
    static int rollNo; // static member
    static int age;
    static string className;
    static string address;
    static int mobNo;

    static void displayData(); // static function
};

int Student ::age = 10;
int Student ::rollNo = 1454540;
void Student ::displayData()
{
    cout << "Student Detail : " << endl;
    cout << "Age : " << age << endl;
    cout << "Roll No : " << rollNo << endl;
    // cout << "Class : " << className << endl;
    // cout << "Mobile No : " << mobNo << endl;
    // cout << "Address : " << address << endl;
}

int main()
{
    Student stu1; // stu1 object
    Student stu2; // stu2 object

    // student1 details
    // stu1.age = 14;
    // stu1.className = "X";
    // stu1.mobNo = 763423222;
    // stu1.address = "Jhansi";
    stu1.displayData();

    // Student 2 Details
    // stu2.age = 16;
    // stu2.className = "XII";
    // stu2.mobNo = 763423122;
    // stu2.address = "Ambabai";
    stu2.displayData();
}