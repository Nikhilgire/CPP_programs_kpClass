# include<iostream>
# include<string.h>
using namespace std;
int main()
{
    char str1[20]= "C++";
    char str2[20]= "Programming";
    int l1,l2,i;

    l1 = strlen(str1);
    l2 = strlen(str2);

    for(i=0;i<=l2;i++)
    {
        cout.write(str2,i);
        cout<<"\n";
    }
    
    for(i=l2-1;i>=0;i--)
    {
        cout.write(str2,i);
        cout<<"\n";
        
    }
    cout.write(str1,l1).write(str2,l2);

   
}