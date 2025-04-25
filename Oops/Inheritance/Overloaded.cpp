

#include <iostream>
using namespace std;

class Overloaded
{

    // overloded function or operator overloaded  : it is declaration inside the same scope or same class where the name of the function is same but their arguments is different or multiple function .

public:
    int sum;
    int add(int a, int b)
    {
        sum = a + b;
        return sum;
    }
    int add(int a, int b, int c)
    {
        sum = a + b + c;
        return sum;
    }
    int add(int a, int b, int c, int d)
    {
        sum = a + b + c + d;
        return sum;
    }
    int add(int a, int b, int c, int d, int e)
    {
        sum = a + b + c + d + e;
        return sum;
    }
};

int main()
{
    Overloaded over1;
    cout << over1.add(2, 5) << endl;
    cout << over1.add(2, 5, 6) << endl;
    cout << over1.add(2, 5, 6, 7) << endl;
    cout << over1.add(2, 5, 8, 9, 3) << endl;
}