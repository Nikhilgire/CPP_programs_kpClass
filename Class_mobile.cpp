#include <iostream>
using namespace std;

class mobile
{

  int price;
  char model_no[10];

public:
  void getdata();
  void putdata();
};

void mobile ::getdata()
{
  for (int i = 0; i < 10; i++)
  {
    cout << " Enter price of " << i + 1 << " mobile : "
         << "\n";
    cin >> price;
    cout << "Enter model number of " << i + 1 << " mobile : "
         << "\n";
    cin >> model_no;
  }
}

void mobile ::putdata()
{
  for (int i = 0; i < 10; i++)
  {
    cout << " price of the " << i + 1 << "mobile :" << price << "\n";
    cout << " model number of " << i + 1 << "mobile : " << model_no << "\n";
  }
}
int main()
{
  mobile data[10];
  for (int i = 0; i < 10; i++)
  {
    data[i].getdata();
    data[i].putdata();
  }
}