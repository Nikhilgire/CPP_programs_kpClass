#include <iostream>
using namespace std;

class A
{
    int a, b;

public:
    void get()
    {
        cout << "Enter value of a and b :" << endl;
        cin >> a >> b;
    }
    friend void dis()
    {
        cout << "Value of A and b before Swapping";
    }
};
