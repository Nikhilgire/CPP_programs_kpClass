# include<iostream>
using namespace std;
class A 
{
    int a ;
    static int  b;
    public:
    void set (int x )
    {
      a = x;
      a++;
      b++;
    }
    void show()
    {
        cout<<"\nValue of a : "<<a;
        cout<<"\nValue of static variable : "<<b;
    }
};
int A ::b;

int main()
{
   A aa,bb;
   aa.set(12);
   aa.show();
   bb.set(54);
   bb.show();
}

