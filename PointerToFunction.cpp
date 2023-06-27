# include<iostream>
using namespace std;

int  sum ( int  , int );

int main()
{
    int add ,a=10,b=20;
  int (*ptr) (int , int );

  ptr = &sum;
  
add = ptr(a , b);
cout<<"sum ="<<add;

}
int sum(int x , int y )
{
    return x+y;
}