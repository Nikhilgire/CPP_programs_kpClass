# include<iostream>
using namespace std;

int main()
{
    int x,y,temp;
    int *ptr;
    temp = 3;
    ptr = &temp;
    
    x = 5*(temp + 5);
    y = 5*(*ptr + 5); 

    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;
    return 0;

}
