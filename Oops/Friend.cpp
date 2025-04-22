

#include <iostream>
using namespace std;

class Friend
{

public: // public : access specifier
        // friend function : it is a function which has a accessibility to use private and protected properties of class template
private:
    string address;

    int age;
    int rollNo;

public:
    friend void showAdd(Friend fr);
    void setAdd(string add);
};

void Friend ::setAdd(string add)
{
    address = add;
}

void showAdd(Friend fr)
{
    cout << "Address of Student : " << fr.address;
}

int main()
{
    Friend fr;
    fr.setAdd("Jhansi");
    showAdd(fr);
}