

#include <iostream>
using namespace std;

class Animal
{ // base class or parent class

public:
    // member variable
    int legs;
    string color;
    int ear;

    void eat()
    {
        cout << "Animal Eats" << endl;
    }
    void display()
    {
        cout << "Leg : " << legs << endl;
        cout << "Color : " << color << endl;
    }
};

class Animal2
{

public:
    int ear;
    string colors;

    void speed()
    {
        cout << "Animal Speed" << endl;
    }
};

// Multiple Inheritance - child class have the access to use the properties of multiple base class.
class Dog : public Animal, public Animal2
{ // child class or derived class

public:
    void bark()
    {
        cout << "dog bark" << endl;
    }
};

int main()
{

    Animal horse;
    Dog dg;
    cout << "Parent class : " << endl;
    horse.color = "Brown";
    horse.legs = 4;
    horse.eat();
    horse.display();
    cout << "Child class";
    dg.display();
    dg.bark();
    dg.speed();
}