# include<iostream>

using namespace std;

class B
{
    protected:
    int i ;
    public:
    B(int a)
    {
        i = a ;
    }
};

class D : public B
{
    
    
   protected:
    int j ;
    public:
    D(int a , int b) : B(a)
    {
        j = b ;
    }
 
void display()
{
    cout<<" i = "<<i<<"\n"<<" j = "<<j;
}
};
int main()
{
    D aa(10 ,20);
    aa.display();
}