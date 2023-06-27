# include<iostream>
using namespace std;
class A
{

    public:
    virtual void fun1() =0 ;
    void f2()
    {
        cout<<"\nthis is from class A"<<endl;
    }
    
};

class B :public A
{
    int j;
    public:
    void fun1()
    {
        cout<<"\nImplimentation of pure virtual function";

    }
  
};
int main()
{
    B ob;
    ob.fun1();
    ob.f2();
}
