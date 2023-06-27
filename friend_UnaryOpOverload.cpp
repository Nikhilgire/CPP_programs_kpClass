#include <iostream>
using namespace std;

class test
{
    int i;

public:
    test(int a)
    {
        i - a;
    }
    friend test operator!(test &t)
    {
        t.i = !t.i;
        return t;
    }
    void display()
    {
        cout << "!i= " << i << endl;
    }
};

int main()
{
    test t1(0);
    !t1;
    t1.display();
}