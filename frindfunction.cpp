# include<iostream>
using namespace std;

class demo
{
    int a ;
    public:
    void getdata()
    {
        cout<<"enter value of a : "<<endl;
        cin>>a;
    }

    friend int fun (demo );

};

int  fun(demo aa)
{
    return aa.a;
}
int main()
{
    demo aa ;
    aa.getdata();
    fun(aa);
    cout<<"Value of a = "<<fun(aa);
   
}