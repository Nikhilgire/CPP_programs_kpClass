# include<iostream>
using namespace std;

class student 
{
    int rn;
    char name [12];
    float per;
    public:
    void getdata()
    {
        cout<<"Enter student roll number , name and percentage : ";
        cin>>rn>>name>>per;
    }
    void putdata()
    {
        if (per > 90){
        cout<<rn<<" "<<name<<" "<<per<<endl;
        }
    }
};

int main()
{
  student obj[3] , *ptr ;
  ptr = &obj[0];
  
  for (int i =0;i<3;i++){
    ptr->getdata();
    ptr ++;
  }
  ptr = &obj[0];
  cout<<"Student details who's Percentage is greater than 90: "<<endl;
  for (int i =0;i<3;i++){
    ptr->putdata();
   ptr++;
}

}