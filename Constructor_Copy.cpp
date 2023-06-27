# include<iostream>
using namespace std;

class demo
{
     int a , b ;
     int x , y;
    public:
     demo()
     {
        a = 10;
        b = 20;

     }
     demo(demo & z)
     {
    
       a = z.a;
       b = z.b;
     }

     void putdata()
     {
        cout<<" value of a = "<<a<<endl;
        cout<<" Value of b = "<<b<<endl;
         
     }
};
int main()
{
   demo aa;
   demo bb (aa);        
   demo cc = bb;
   aa.putdata();
   bb.putdata();
   cc.putdata();

    return 0 ;
}