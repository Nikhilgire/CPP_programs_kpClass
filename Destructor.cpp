#include <iostream>
using namespace std;
class test
{
  int count;

public:
  test()
  {
    count++;
    cout << "\n object created " << endl;
  }
  ~test()
  {
    count--;
    cout << "\n object destroyed " << endl;
  }
};
int main()
{
  test t1;
}