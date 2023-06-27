#include <iostream>
using namespace std;

int main()
{
  int x;

  int *ptr;
  x = 10;
  ptr = &x;

  cout << "x = " << x << " and  "
       << " ptr = " << ptr << endl;
  cout << "x = " << x << " and "
       << " *ptr = " << *ptr << endl;
  cout << "Address of x = " << &x << endl;
  cout << "Value of ptr  = " << ptr << endl;
  cout << "Address of ptr  = " << *ptr << endl;
  ptr++;
  cout << "Value of ptr  = " << ptr << endl;
  ptr--;
  cout << "Value of ptr  = " << ptr << endl;
  ptr--;
  cout << "Value of ptr  = " << ptr << endl;

  return 0;
}