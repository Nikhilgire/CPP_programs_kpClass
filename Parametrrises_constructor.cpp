# include<iostream>
using namespace std;

class wall
{
    double length,height;
    public:
    wall(double leg, double hgt)
    {
        length =leg;
        height = hgt;

    }
    wall (double hgt)
    {
        height = hgt;
    }
     double display()
     {
      return length* height;

     }
};
int main()
{
    wall w1(4 , 12);
    wall w2 (11);
    cout<<" are = "<<w1.display();
    cout<<" are1 = "<<w2.display();
}