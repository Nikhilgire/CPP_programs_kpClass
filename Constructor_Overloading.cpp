#include <iostream>
using namespace std;

class swaap
{
    int a, b;

public:
    swaap()
    {
        a = 10;
        b = 20;
    }
    swaap(int x)
    {
        a = x;
        b = 20;
    }
    swaap(int x, int y)
    {
        a = x;
        b = y;
    }
    void putdata()
    {
        int t;
        cout << " numbers after swaping :" << endl;
        t = a;
        a = b;
        b = t;
        cout << a << " " << b;
    }
};
int main()
{
    swaap aa;
    aa.putdata();
    swaap bb(5);
    bb.putdata();
    swaap cc(4, 5);
    cc.putdata();
    return 0;
}