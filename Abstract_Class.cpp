#include <iostream>
using namespace std;

class test
{
public:
    virtual void display() = 0 ;
     void show()
    {
        cout << "\nFrom test class ";
    }
};

class test1 : public test
{

public:
    void display()
    {
        cout << "\nFrom test1 class ";
    }
    
};

int main()
{
    test1 T;
  
    T.show();
    T.display();
}
