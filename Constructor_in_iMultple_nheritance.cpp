# include<iostream>
using namespace std;

class B1
{
    public:
    B1()
    {
        cout<<"From B1 class ";
    }
};
class B2
{
    public:
    B2()
    {
        cout<<"\nFrom B2 class ";
    }


};
class D : public B1 , public B2
{
    public:
       D()
    {
        cout<<"\nFrom D class ";
    }


};
int main()
{
    D aa;
    return 0;
    
}