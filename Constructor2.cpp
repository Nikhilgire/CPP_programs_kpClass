#include <iostream>
using namespace std;

class swap1
{
  int a, b;

public:
  swap1()
  {
    cout << " Enter value of a and b :" << endl;
    cin >> a >> b;
  }
  void display()
  {
    cout << " Before swapping a and b are : " << endl;
    cout << " a = " << a << " b = " << b;

    int t;
    t = a;
    a = b;
    b = t;
    cout << " \nAfter swapping a and b are : " << endl;
    cout << " a = " << a << " b = " << b;
  }
};
int main()
{
  swap1 aa;
  aa.display();
}