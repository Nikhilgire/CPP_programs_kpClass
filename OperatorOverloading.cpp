
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
    shape operator++()
    {
        ++feet;
        ++inch;
    }
     shape operator--()
    {
        --feet;
        --inch;
    }
    void display()
    {
        cout << " Feet = " << feet << endl;
        cout << " inch = " << inch << endl;
    }
};
int main()
{
    shape s(10, 20);
     
    s.display();
    ++s;  // Operator ++(S);
    s.display();

    --s;
    s.display();

}

