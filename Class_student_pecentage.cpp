# include<iostream>
using namespace std;
class student 
{
  private:
  int rollno;
  float per;
  char name[12];
  public:
  void getdata();
  void putdata();
};

void student :: getdata()
{
  int i;
  for(i = 0;i<5;i++){
 cout<<"Enter deatails of "<<i+1<<"student :"<<endl;
 cin>>rollno>>per>>name;}
}
void student :: putdata()
{
  int max,i;
  cout<< " Details of the student who having maximun marks : "<<endl;
    for(i = 0;i<5;i++){
     cout<<rollno<<per<<name;
    }
}
int main()
{
  int i;
  student aa[10];
  for(i = 0;i<5;i++){
  aa[i].getdata();
  aa[i].putdata();}
}