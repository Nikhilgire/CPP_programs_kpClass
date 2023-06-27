// write a program to find smallest of two no by using friend function
#include <iostream>
using namespace std;

class A
{
    int a, b;

public:
    void getdata()
    {
        cout << "Enter two numbers : " << endl;
        cin >> a >> b;
    }

    friend int fun(A);
};
int fun(A aa)
{
    if (aa.a < aa.b)
        return aa.a;
    else
        return aa.b;
}
int main()
{
    A aa;
    aa.getdata();

    cout << "Smallest no is " << fun(aa);
}