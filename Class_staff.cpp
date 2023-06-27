# include<iostream>
using namespace std;

class staff
{

  private:
  char name[12];
  char post[12];
  public:
  void accept();
  void display();

}; 

void staff :: accept()
{
    int i;
    for(i=0;i<5;i++)
    {
    cout<<" Enter name of"<<i+1<<" teacher :"<<endl;
    cin>>name;
    cout<<"Enter post of"<<i+1<<" teacher : "<<endl;
    cin>>post;
    }
}

void staff :: display()
{
if ( post == " HOD")
        cout<<" name : "<<name<<endl;
     
}
int main()
{
 staff aa[5];
for(int i=0;i<5;i++)
{
        aa[i].accept();
}
for(int i=0;i<5;i++)
     
      aa[i].display();
    


}