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
    student s2 ,*ptr1;
    ptr = &s1;
    ptr1=&s2;
    ptr->accept();
    ptr->print();
    ptr1->accept();
    ptr1->print();
    

}