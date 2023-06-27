
// Constructor in Inheritance

#include <iostream>

using namespace std;

class T1
{
public:
    T1()
    {
        cout << " From base class ";
    }
};
class D1 : public T1
{
public:
    D1()
    {
        cout << "\nFrom derived class ";
    }
};
int main()
{
    D1 aa;
    return 0;
}