#include <iostream>
using namespace std;

class MyClass
{
private:
    int num1, num2;

public:
    MyClass(int a = 1000, int b = 2000)
    {
        num1 = a;
        num2 = b;
    }
    void display()
    {
        cout << "num1 = " << num1 << ", num2 = " << num2 << endl;
    }
};

int main()
{
    MyClass obj1;     // default arguments used
    MyClass obj2(10); // second argument uses default value
    MyClass obj3(20, 30);

    obj1.display();
    obj2.display();
    obj3.display();

    return 0;
}
