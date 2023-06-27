# include<iostream>
using namespace std;

class College
{
    private :
    int college_code;
    char name[12];
    public:
    void getdata()
    {
        cout<<"enter college code :"<<endl;
        cin>>college_code;
        cout<<"Enter college name :"<<endl;
        cin>>name;

    }
    void putdata()
    {
        cout<<" college code is :"<<college_code<<endl;
        cout<<"College name is :"<<name<<endl;

    }
};
class Student : public College
{
    private:
    int roll_no;
    char student_name[12];
    public:
    void getdata1()
    {
        cout<<"enter Stdent roll number  :"<<endl;
        cin>>roll_no;
        cout<<"Enter Student  name :"<<endl;
        cin>>student_name;

    }
    void putdata1()
    {
        cout<<" college code is :"<<roll_no<<endl;
        cout<<"College name is :"<<student_name<<endl;

    }
};
int main()
{
    Student aa;
    aa.getdata();
    aa.getdata1();
    aa.putdata();
    aa.putdata1();
}