
// FIbbonachhi Series using pointer
# include<iostream>
using namespace std;

int main()
{
   int n ;
   int *ptr ;
   ptr =&n;
   int  Fterm = 0;
   int  Sterm = 1;
   int Tterm = Fterm + Sterm;

    cout<<"Enter no of term of fibbonachi series : ";
    cin>>*ptr;
    cout<<"Fibbonachi Sequence :"<<" ";
    cout<<Fterm<<" "<<Sterm<<" ";
   

    for(int i = 3;i<=*ptr;i++)
    {
       
        Fterm = Sterm ;
        Sterm = Tterm ;

        Tterm = Fterm + Sterm ;
  
       cout<<Tterm<<" ";
       
    }
     
       Tterm = Fterm + Sterm ;
}