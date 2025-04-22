

#include <iostream>
using namespace std;

// creating class

class Vehicle // Vehicle is class variable or class name
{

public: // Public is a Access specifier or modifier
    // class member :
    int noOfGear;
    string brand;
    string model;
    int airBag;
    string color;

    // class member function
    void display()
    {
        cout << "Details of Car : " << endl;
        cout << "Brand Name :" << brand << endl;
        cout << "Model N0. : " << model << endl;
        cout << "No of Airbag : " << airBag << endl;
        cout << "No of Gear : " << noOfGear << endl;
    }
};

int main()
{
    // Creating Object

    Vehicle car;          // Car is a object of class Vehicle which is used to access properties of Template class.
    car.brand = "Toyota"; // Dot (.) to access properties of class we use dot along with object to use class's properties
    car.model = "T140202";
    car.airBag = 4;
    car.noOfGear = 4;
    car.display(); // display : it is a method of class which dispaly data of class member.
}