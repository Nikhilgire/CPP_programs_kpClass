# include<iostream>
using namespace std;

class demo
{
    int a ,b;
    public:
    demo( int x , int y)
    {
      a = x;
      b = y;
    } 

    void putdata()
    {
        cout<<" Value of a = "<<a<<endl;
        cout<<" Value of b = "<<b<<endl;

    }
};

int main()
{
    demo aa(10 , 20);
    aa.putdata();
    return 0;
}