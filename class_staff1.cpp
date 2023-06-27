#include<iostream>
#include<string>
using namespace std;

class staff
{
private:
string name,post;
public:
void accept()
{
cout<<"Enter Name: ";
cin>>name;
cout<<"Enter Post: ";
cin>>post;
}
void display()
{
if(post == "HOD")
cout<<"Name: "<<name<<endl;
}
};

int main()
{
staff s[5];
for(int i=0;i<5;i++)
{
cout<<"Enter details of Staff "<<i+1<<endl;
s[i].accept();
}
cout<<"\nDetails of HOD in CPP Department\n";
for(int i=0;i<5;i++)
s[i].display();
return 0;
}