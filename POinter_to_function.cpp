# include<iostream>
using namespace std;

float  avg1 (float  , float , float  );

int main()
{
     float  a ,b,c,avg;
    float  (*ptr) ( float , float , float );

    ptr=&avg1;
    cout<<" Enter any three floating values :";
    cin>>a>>b>>c;
    avg=(*ptr)(a,b,c);
    cout<<"FLoating values are : "<<a<<b<<c;

    cout<<"\n avergae = "<<avg;
   
} 


   

float avg1 ( float x,  float y , float z)
{
   float avg ;

   avg = x + y + z /3;
   return avg;
   
}

