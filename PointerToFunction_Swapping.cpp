# include<iostream>
using namespace std;
void swapp(int*  , int*  );
int main()
{
    int a , b ;
    cout<<" Enter value of a and b to do swapping :"<<endl;
    cin>>a>>b;

    cout<<" value Before swapping : "<<a<<" " <<b;

    void (*ptr) (int* , int* ) ;

    ptr = & swapp;

    ptr (&a,&b);
     cout<<" \nvalue after swapping : "<<a<<"  "<<b;

}
void swapp(int *a , int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}