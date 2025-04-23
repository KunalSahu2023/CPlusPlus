
#include <iostream>
using namespace std;

class Overloading
{

public:
    Overloading(int a, int b)
    {
        int c = a + b;
        cout << "Addition : " << c << endl;
    }
    Overloading(int a, int b, int c)
    {
        int d = a + b + c;
        cout << "Addition : " << d << endl;
    }
    Overloading(int a, int b, int c, int d)
    {
        int e = a + b + c + d;
        cout << "Addition : " << e << endl;
    }
    Overloading(int a, int b, int c, int d, int e)
    {
        int f = a + b + c + d + e;
        cout << "Addition : " << f << endl;
    }
};

int main()
{
    Overloading ov1(20, 50);
    Overloading ov2(20, 50, 50);
    Overloading ov3(20, 50, 24, 56);
    Overloading ov4(20, 50, 45, 56, 76);
}