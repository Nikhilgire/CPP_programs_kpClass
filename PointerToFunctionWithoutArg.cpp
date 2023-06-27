# include<iostream>
using namespace std;

int sum ();
int main()
{
int add ;
int (*ptr) ();
ptr = &sum;

 add=ptr();

cout<<" Adddition = "<<add;


}
int sum()
{
    int x ,y;
    x = 10 , y =20;
    return  x + y;
}



// # include<iostream>
// using namespace std;

// void  sum ();
// int main()
// {
// void  (*ptr) ();  // define poiter of function type
// ptr = &sum;     // Assingning address of function to pointer 

//  ptr();  //function call using pointer 

// }
//  void sum()
// {
//     int x ,y;
//     x = 10 , y =20;
//     cout<<" Addition = "<<x+y;
// }