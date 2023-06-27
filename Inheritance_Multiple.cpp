# include<iostream>
using namespace std;

class subject1
{
   protected:
    int s1;

};
class subject2
{
    protected:
    int s2;

};
class total : public subject1 , public subject2
{   
    int total;
    public:
    void getdata()
    {
        cout<<" Enter marks of two subject "<<endl;
        cin>>s1>>s2;
    }
    void cal()
    {
        total = s1 + s2 ;
        cout<<"Marks of first subject :"<<s1<<endl;
        cout<<"Marks of second subject :"<<s2<<endl;
        cout<<"Total Marks of  subject :"<<total<<endl;
    }

};
int main()
{
    total aa;
    aa.getdata();
    aa.cal();
}