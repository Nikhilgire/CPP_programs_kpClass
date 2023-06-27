# include<iostream>
using namespace  std;

class demo
{
    protected:
    int a = 10 ;
   
    int b = 20 ;
                                           /*value of a = 10 
                                             value of b = 20 
                                             value of c = 30*/
    int c = 30 ;

};

class Hellow : public demo
{
    public:
    void putdata()
    {
        cout<<" \nvalue of a = "<<a;
        cout<<" \nvalue of b = "<<b;
        cout<<" \nvalue of c = "<<c;
    }
    
};
int main()
{ 
    Hellow aa;
   
    aa.putdata();
  
}

