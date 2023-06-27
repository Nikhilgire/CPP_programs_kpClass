# include<iostream>
using namespace std;
void swap1(int  , int );
void swap1(float , float );

int main()

{
    int m , n ;
    float r ,d;

    void (*ptr1) (int , int );
    ptr1 =&swap1;
    void (*ptr) (float , float );
    ptr =&swap1;

   cout<<"Enter two integer values to swap : "<<endl;
   cin>>m>>n;
   cout<<"Enter two Floating values to swap : "<<endl;
   cin>>r>>d;

    ptr1(m,n);
    ptr(r,d);
    
}

    void swap1(float  a , float  b )
    {
     float  x ;
      cout<<"\nSwapping of Floating values : "<<endl;
      cout<<"Values before swapping :"<<"a = "<<a<<" "<<"b = "<<b<<endl;
      x=a;
      a=b;
      b=x;
      cout<<"Values after swapping :"<<"a = "<<a<<" "<<"b = "<<b<<endl;
    }
     void swap1(int  a , int b )
    {
     int  x ;
      cout<<" Swapping of Integer values : "<<endl;

      cout<<"Values before swapping :"<<"a = "<<a<<" "<<"b = "<<b<<endl;
      x=a;
      a=b;
      b=x;
      cout<<"Values after swapping :"<<"a = "<<a<<" "<<"b = "<<b<<endl;
}