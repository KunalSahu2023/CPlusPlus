#include <iostream>
using namespace std;

class Animal
{ // base class or parent class

    // this is a public inheriitance

public: // if member of base class is public then it becomes public for derived class or child class and private and protected member will be public for the derived class.
    // member variable
    int legs;

    void eat()
    {
        cout << "Animal Eats" << endl;
    }
    void display()
    {
        cout << "Leg : " << legs << endl;
        cout << "Color : " << color << endl;
    }

    // this is a private inheriitance

private: // if member of base class is private then it can not be accesible by the child class or derived class and public and protected member will be private for the child class.
    string color;

    // this is a protected inheritance

protected: // if member of base class is protected then it becomes protected for derived class or child class and it can be access for the base class by the public.
    int balance;
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
    // horse.color = "Brown"; // if you want to access this color properties then we have to make public function.
    horse.legs = 4;
    horse.eat();
    horse.display();
    cout << "Child class";
    dg.display();
    dg.bark();
}