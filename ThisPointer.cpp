#include <iostream>
using namespace std;

class A
{
    int i, j;

public:
    A &setdatai(int i)
    {
        this->i = i;
        return *this;
    }
    A &setdataj(int j)
    {
        this->j = j;
        return *this;
    }
    void display()
    {
        cout << "i= " << i << " ;  j = " << j;
    }
};
int main()
{
    A ob;
    ob.setdatai(100).setdataj(200).display();
}