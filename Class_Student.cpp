# include<iostream>
using namespace std;

class A 
{
    public:
    int a ;
    public:
    void set(int x );
};

void A :: set(int a)
{

cout<<"Value of a = "<<a;
}

class B : public A 
{
    int x ;
    public:
    void get()
    {
     cout<<" \nvalue of a = "<<a;
    }
};
int main()
{
    B aa , bb;
    aa.set(18);
    bb.get();
}