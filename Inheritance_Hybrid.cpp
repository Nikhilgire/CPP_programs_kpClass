# include <iostream>
using namespace std;

class student 
{
   protected:
    float   m1 , m2 ;
    char name[12];
    public:
    void getdata()
    {
        cout<<" Enter student marks :"<<endl;
         cout<<" enter marks 1 :"<<endl;
        cin>>m1;
         cout<<" enter marks 2 :"<<endl;
        cin>>m2;
       
        cout<<" Enter student name :"<<endl;
        cin>>name;
    }
    void putdata()
    {
        cout<<"Student marks is : "<<endl;
         cout<<" marks of m1 : "<<m1<<endl;
        
        cout<<" marks of m2 : "<<m2<<endl;

        cout<<"Student name is : "<<name;
    }
};

class sports 
{
   protected:
    float SPM ;
    public:
    void getdata3()
    {
        cout<<" Enter sports marks : "<<endl;
        cin>>SPM;

    }
    void putdata3()
    {
        cout<<" \nSports marks is : "<<SPM;
    }
};

class Result : public student , public sports
{
    protected:
   int total ;
   float  percentage ;
    public:
    void getdata2()
    {
        total =100+100+100;
        
        percentage =( m1 + m2 + SPM  / total)*100;

    }
    void putdata2()
    {
        cout<<" total marks :"<<total<<endl;
        cout<<" percentage of the student : "<<percentage<<endl;

    }
};

int main()
{
    Result aa;
    aa.getdata();
    aa.getdata3();
    aa.getdata2();
    aa.putdata();
    aa.putdata3();
    aa.putdata2();
   

    
}
