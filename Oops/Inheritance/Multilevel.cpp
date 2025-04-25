

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

// Multileve Inheritance - In this child has the acces of the properties of it parent where parent class have the acces of their parent and so on.
class Dog : public Animal
{ // child class or derived class

public:
    void bark()
    {
        cout << "dog bark" << endl;
    }
};

class Pupp1 : public Dog
{
public:
    void pup()
    {
        cout << "Pupp1 Pups.." << endl;
    }
};

class pupp2 : public Pupp1
{
public:
    void pupp()
    {
        cout << "Pupp2 pupps" << endl;
    }
};

int main()
{
    Animal ani;
    ani.eat();
    Dog d1;
    d1.eat();
    d1.bark();
    Pupp1 p1;
    p1.pup();
    p1.eat();
    p1.bark();
    pupp2 p11;
    p11.eat();
    p11.bark();
    p11.pup();
    p11.pupp();
}
