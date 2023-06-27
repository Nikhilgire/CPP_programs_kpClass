# include<iostream>
using namespace std;

int main()
{
    char s[20], *p;
    int c = 0 ;
    cout<<"Enter any string :";
    gets(s);

    p = s ;

    while (*p!= '\0')
    {
        if (*p == 'a' ||*p == 'e' ||*p == 'i' ||*p == 'o' ||*p == 'u' || 
            *p == 'A' ||*p == 'E' ||*p == 'I' ||*p == 'O' ||*p == 'U' )
 
        c++;
        p++;

    }

  cout<<"The vovels in the string = "<<c;
    
}

