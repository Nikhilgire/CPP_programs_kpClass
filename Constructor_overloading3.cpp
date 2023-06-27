# include<iostream>
using namespace std;

class box
{
    public:
    double height , breath , length ;
    
    
};
int main()
{
    double valume = 0.00;
    box box1;
    box1.height = 5.2 ;
    box1.breath = 10.3;
    box1.length = 1.5 ;

    box box2;
    box2.height = 5.35 ;
    box2.breath = 6.15 ;
    box2.length = 7.12;

    valume = box1.height * box1.breath * box1.length;
    cout<<" \nvalume of box 1 = "<<valume<<" cubic meter (m3)"<<endl;
    valume = box2.height * box2.breath * box2.length;
    cout<<" \nvalume of box 2 = "<<valume<<" cubic meter (m3)"<<endl;


}