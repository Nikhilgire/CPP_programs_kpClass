#include <iostream>
using namespace std;
class B;
class A
{
    int i;

public:
    A(int a)
    {
        i = a;
    }
    friend void max1(A , B );
};
class B
{
    int j;

public:
    B(int b)
    {
        j = b;
    }
    friend void max1(A , B );
};
void max1(A oba, B obb)
{
    if (oba.i > obb.j)
    {
        cout << oba.i << " is largest" << endl;
    }
    else
    {
        cout << obb.j << " is largest" << endl;
    }
}
int main()
{
    A a1(123);
    B b1(450);
    max1(a1, b1);
}
