# include <iostream>
using namespace std;

class student 
{
   protected:
    int rn ;
    char name[12];
    public:
    void getdata1()
    {
         cout<<" Enter student roll no  :"<<endl;
        cin>>rn;
       
        cout<<" Enter student name :"<<endl;
        cin>>name;
    }
    void putdata1()
    { 
        
        cout<<"Student roll no  : "<<rn<<endl;

        cout<<"Student name is : "<<name;
    }
};

class marks : public student
{
   protected:
   float m1 , m2 ;
    public:
    void getdata2()
    {
        cout<<" Enter student marks :"<<endl;
         cout<<" enter marks 1 :"<<endl;
        cin>>m1;
         cout<<" enter marks 2 :"<<endl;
        cin>>m2;
       
    }
    void putdata2()
    {
        cout<<"Student marks is : "<<endl;
         cout<<" marks of m1 : "<<m1<<endl;
        
        cout<<" marks of m2 : "<<m2<<endl;

    }
};


class sports : public student

{
   protected:
    int  SPM ;
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

class Result : public marks ,public sports
{
    protected:
   int total ;
   float  percentage ;
    public:
    void getdata4()
    {
        total = m1 + m2 + SPM;
        percentage =( m1 + m2 + SPM  / 300)*100;

    }
    void putdata4()
    {
        cout<<" total marks :"<<total<<endl;
        cout<<" percentage of the student : "<<percentage<<endl;

    }
};

int main()
{
    Result aa;
    sports bb;
    marks cc;
    
    bb.getdata1();
    bb.putdata1();

    aa.getdata2();
    aa.getdata3();
    aa.putdata2();
    aa.putdata3();
    aa.getdata4();
    aa.putdata4();
   
    return 0;
}
