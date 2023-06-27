# include<iostream>
using namespace std;

class B 
{
    public :
    B()
    {
        cout<<" \nFrom class B";
    }
};
class D1 : public B
{
    public:
    D1()
    {
        cout<<" \nFrom class D1";
    }
};
class D2  : public B
{
    public:
    D2()
    {
        cout<<" \nFrom class D2";
    }
};
int main ()
{
    D1 aa;
    D2 bb;
    return 0;

}


// Base class contructor call everytime when we create object of child class //