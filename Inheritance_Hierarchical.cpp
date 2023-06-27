#include <iostream>
using namespace std;

class student
{
private:
    int rn;
    char name[12];

public:
    void getdata()
    {
        cout << " Enter roll number of the student :" << endl;
        cin >> rn;
        cout << " Enter name of the student :" << endl;
        cin >> name;
    }
    void putdata()
    {
        cout << "  roll number of the student :" << rn << endl;
        cout << "  name of the student :" << name << endl;
    }
};
class marks : public student
{
private:
    int sub_marks;

public:
    void accept()
    {
        cout << " Enter student marks in academics : " << endl;
        cin >> sub_marks;
    }
    void display()
    {
        cout << " Academics marks of the student is : " << endl;
        cout << sub_marks;
    }
};
class sports_marks : student
{
private:
    int sports_M;

public:
    void accept1()
    {
        cout << " Enter student marks in sports : " << endl;
        cin >> sports_M;
    }
    void display1()
    {
        cout << " \nSports  marks of the student is : " << endl;
        cout << sports_M;
    }
};
int main()
{
    marks aa;
    sports_marks bb;
    aa.getdata();
    aa.accept();
    bb.accept1();
    aa.putdata();
    aa.display();
    bb.display1();
   
}
