# include<iostream>
using namespace std;

class demo
{
    int a ,b;
    public:
    demo()
    {
        cout<<"Enter value of a and b:"<<endl;
        cin>>a>>b;

    }
    demo(demo &z)
    {
       a = z.a;
       b = z.b;

    }
    void display()
    {
        cout<<" Value of a = "<<a<<endl;
        cout<<" Value of b = "<<b<<endl;

    }
};
int main()
{
    demo aa;
     aa.display();
    demo bb(aa);
    bb.display();
    demo cc(bb);
    cc.display();
}