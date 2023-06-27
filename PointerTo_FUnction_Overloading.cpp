// FUnction Overloading

# include<iostream>
using namespace std;

class test
{
    public:
    void area()
    {
        float pi = 3.14 ,a1;
        int r = 2;
        a1 = pi * r * r;
        cout<<"area of circle  = "<<a1;
    }
     void area(int r)
    {
        float pi = 3.14 ,a2;
        a2 = pi * r * r;
        cout<<"\narea of circle a1 = "<<a2;
    }
    void area (int l , int b)
    {
        int a3 = l * b;
        cout<<"\narea of rectangle = "<<a3;
    }
};

int main()
{
    test t;
    t.area();
    t.area(5);
    t.area(2,3);
}