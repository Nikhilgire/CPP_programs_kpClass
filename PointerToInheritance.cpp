# include<iostream>
using namespace std;

class base
{
    int i ;
    public:
    void setB()
    {
        i = 10 ;
    } 
    void display()
    {
        cout<<" i = "<<i;
    }
};
class derived : public base  
{
  int j ;
  public:
  void setD()
  {
    j = 20 ;
}
void display1()
{
    cout<<"\n j = "<<j;
}
};
int main()
{
   base *ptr ;
   derived d,*ptr1 ;
   ptr->setB();
   ptr->display();
   ptr1 = &d;
   ptr1->setD();
   ptr1->display1();
}