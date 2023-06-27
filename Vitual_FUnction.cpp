# include<iostream>
using namespace std;

class test
{
    public:
    virtual void display()
    {
        cout<<"\nDisplay from base class ";
    }
};

class test1 : public test
{
    public:
    void display()
    {
        cout<<"\nDisplay from derived class ";
    }
};
int main()
{
    test  *ptr, b;
    test1 d ;
    ptr=&b;
    ptr->display();
    ptr=&d;
    ptr->display();
}