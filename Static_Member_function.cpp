#include <iostream>
using namespace std;

class demo
{
    int a, b;
    static int x;

public:
    void getdata()
    {
        cout << "Enter values of a and b :" << endl;
        cin >> a >> b;

        cout << " value of static data  member :" << x << endl;
    }
    void putdata()
    {
        cout << " Value of a nd b " << a << " " << b << endl;
    }
    void static fun()
    {
        cout<<"Updated value of Static data member : "<< x + 5<<endl;
    }
};

int demo :: x = 10;

int main()
{
    demo aa;
    aa.getdata();
    aa.putdata();
    demo :: fun();
}