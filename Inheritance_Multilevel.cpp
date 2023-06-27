# include<iostream>
using namespace std;

class Student 
{
    private:
    int rn;
    char name[12];
    public:
    void getdata()
    {
        cout<<" Enter roll number of the student :"<<endl;
        cin>>rn;
        cout<<"Enter name of the student :"<<endl;
        cin>>name;

    }
    void putdata()
    {
        cout<<" Student roll no  and name is : "<<rn<<" "<<name<<endl;

    }
};

class marks : public Student
{
  protected:
  int m1,m2;
  public:
  void getdata1()
  {
   cout<<" Enter marks of two subject :"<<endl;
   cin>>m1>>m2;
  }
  void putdata1()
  {
    cout<<" \nMarks of the subject M1 and M2 : "<<endl;
    cout<<m1<<" "<<m2;
  }
};
class total : public marks
{  
    private:
    int total;
    public:
    void cal_total()
    {
        total = m1 + m2 ;
        cout<<" \nTotal marks : "<<total;
    }
};
int main()
{
   total aa ;
   aa.getdata();
   aa.getdata1();
   aa.putdata();
   aa.putdata1();
   aa.cal_total();
}