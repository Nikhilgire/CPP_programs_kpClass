/* WAP in C++ to declare a class student having data member Roll number , name and department Declare a parametrisd constructor 
with default value for department  as CO to initilise member of object initilise and display data for 2 student */ 

#include<iostream>
using namespace std;

class student
{
private:
    int rn;
    char name[12];
    char department[12];
public:
 student( int r , char n[12]="nikhil" , char d[12]= "CO")
    {
        rn = r;
        char name = n[12];
       char  department = d[12];
     
       
    }
 
   void getdata()
   {
    cout<<" Enter studenr roll no :";
    cin>>rn;
    cout<<" Enter studenr name :";
    cin>>name;
    
   }
    void putdata()
   {
    cout<<"  studenr roll no :"<<rn<<endl;
  
    cout<<"  studenr name :"<<name<<endl;

     cout<<"  studenr department :"<<department<<endl;
    
   }
};
int main()
{
    student aa(123,"CO");
    student bb (2 , "nikhil","ME");
    aa.putdata();
    bb.putdata();
}