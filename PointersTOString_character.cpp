# include<iostream>
# include<string.h>
using namespace std;

int main()
{
    char str[10];
    char *ptr , len ;
    int count = 0 ;

    cout<<"Enter the string : "<<endl;
    cin>>str;
   ptr = str ;
    while ((*ptr)!= '\0')   
    {
        count ++ ;
        ptr++;
    }
   cout<<"string = "<<str<<endl;
   cout<<"the no of character in string = "<<count;


}