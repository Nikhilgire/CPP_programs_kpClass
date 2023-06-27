# include<iostream>
using namespace std;

class Time
{
    int h, m;
    public:
    void getdata()
    {
        cout<<" Enter Hours and minutes :"<<endl;
        cin>>h>>m;

    }
    void putdata()
    {
        cout<<" Hours = "<<h<<"\t"<<"MInutes = "<<m<<endl;
    }
    void sum( Time t1 , Time t2)
    {
        h = (t1.m + t2.m)/60;
        m = (t1.m + t2.m)%60;
        h = h+(t1.h + t2.h);
    }
};
int main()
{
   Time t1 , t2 , t3 ;
   t1.getdata();
   t2.getdata();
   t3.sum(t1 , t2);
   t1.putdata();
   t2.putdata();
   t3.putdata();
}