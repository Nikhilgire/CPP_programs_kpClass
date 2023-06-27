#include <iostream>
using namespace std;

class student
{
    int rollno;
    char name[12];
    static int x; // Value of x is 0 initially
public:
    void getdata();
    void putdata();
};

int student ::x;

void student ::getdata()
{
    cout << " enter student roll number :" << endl;
    cin >> rollno;
    cout << " enter student name :" << endl;
    cin >> name;
    cout << "Enter new value of static member x : " << endl;
    cin >> x;
}
void student ::putdata()
{
    cout << " details of the student is :" << endl;
    cout << " Roll number : " << rollno << endl;
    cout << " name : " << name << endl;
    cout << "Static data member x = " << x<<endl;
}

int main()
{
    student aa, bb;
    aa.getdata();
    aa.putdata();
    bb.getdata();
    bb.putdata();
}