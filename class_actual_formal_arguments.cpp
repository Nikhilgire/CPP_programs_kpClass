# include<iostream>
using namespace std;

class complex
{
   int a , b ;
   public:
   complex()
   {
    a =10 ;
    b =20 ;
   }
   complex( int a1 , int b1)
   {
     a = a1;
     b = b1;
   }
   void sum(complex o1 , complex o2)
   {
     a = o1.a + o2 .a;
     b = o1.b + o2 .b;
   }
   void display()
   {
    cout<<" a = "<<a<<"\t"<<"b = "<<b<<endl;
   }

}; 
int main()
{
   complex aa,cc;
   complex bb (12 , 45);
    
   cc.sum( aa ,  bb );
   aa.display();
   bb.display();
   cc.display();
 
}
