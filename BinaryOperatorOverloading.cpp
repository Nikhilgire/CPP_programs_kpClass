
// Compile time polymorphism

#include <iostream>
using namespace std;

class shape
{
    int feet, inch;

public:
    shape(int f, int i)
    {
        feet = f;
        inch = i;
    }
    void  operator++()
    {
        feet++;
        inch++;
    }
    void display()
    {
        cout << " Feet = " << feet << endl;
        cout << " inch = " << inch << endl;
    }
};
int main()
{
    shape s(5, 4);
    ++s;
    s.display();
}