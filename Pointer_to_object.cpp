# include<iostream>
using namespace std;

class student 
{
    int rn ;
    char name [12];

    public:

    void accept()
    {
        cout<<"Enter roll no and name :";
        cin>>rn>>name;
    }
    void print()
    {
        cout<<"\nroll no :"<<rn<<endl;
        cout<<"\nname : "<<name<<endl;

    }
};

int main()
{
    student s1 , *ptr;
    ptr = &s1;
    ptr->accept();
    ptr->print();

}