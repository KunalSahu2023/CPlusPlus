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

class Dog : public Animal
{ // child class or derived class

public:
    void bark()
    {
        cout << "dog bark";
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
    dg.ear = 2;
    dg.display();
    dg.bark();
}