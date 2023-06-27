// Increment/Decrement Operator Overloading
#include<iostream>
using namespace std;
class test
{
    int i = 2;
    public:
    void operator ++()
    {
        i = ++i;
    }
      void operator --()
    {
        i = --i;
    }
    void display()
    {
        cout<<"\n++(i) = "<<i<<endl;

    }
     void display1()
    {
        cout<<"\n--(i) = "<<i<<endl;

    }
};

int main()
{
    test t ;
    ++t;
    t.display();
    --t;
    t.display1();
}