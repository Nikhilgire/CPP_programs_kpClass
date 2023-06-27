// Binary Operator Overloading
#include<iostream>
using namespace std;
class test
{
    int a ;
    public:
    test()
    {

    }
    test (int i)
    {
       a = i;
    }
      test operator +(test t2)
    {
       test temp;
       temp.a = a+t2.a;
       return temp;
    }
    void display()
    {
        cout<<"a = "<<a<<endl;

    }
};

int main()
{
    test t1(10),t2(20),t3 ;
    t3 = t1 + t2; // t3 = t1.Operator(t2);
 
    t1.display();
    t2.display();
    t3.display();
}
