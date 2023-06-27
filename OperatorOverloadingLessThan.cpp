// LESS THAN Operator Overloading
#include<iostream>
using namespace std;
class test
{ 
    int a ;
    public:
   
    test (int i)
    {
       a = i;
    }
      bool operator <(test t2)
    {
       if(a<t2.a)
       return true;
       else
       return false;
    }
};

int main()
{
    test t1(10),t2(20);
  if(t1<t2)
  cout<<"t1 value is smaller than t2 value ";
  else
  cout<<"t2 value is smaller than t1 value ";
}
