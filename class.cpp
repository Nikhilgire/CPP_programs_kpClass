#include<iostream>
using namespace std;
class person
{

public:
   int age;
   char name[20];
   char college[20];
   void accept()
   {
    cout<<"enter person age\n";
    cin>>age;
    cout<<" enter person name\n";
    cin>>name;
    cout<<" enter name of the college \n ";
    cin>>college;
   }
   void display ();
};

void person :: display()
{
   cout<<" person age  is :"<<age<<"\n";
   cout<<"person name  is :"<<name<<"\n";
   cout<<" college ="<<college<<"\n";
} 

int  main()
{
    person p;
    p.accept();
    p.display();
    return 0;

}

