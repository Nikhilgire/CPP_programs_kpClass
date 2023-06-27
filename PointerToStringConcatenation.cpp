#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char str1[10];
    char str2[10];

    char *ptr1, *ptr2, i, len;
    ptr2 = str2;

    cout << " Enter first string :" << endl;
    gets(str1);
    len = strlen(str1);
    ptr1 = &str1[len];
    cout << " Enter Second string :" << endl;
    gets(str2);

    while ((*ptr2) != '\0')
    {
        *ptr1 = *(ptr2);

        *ptr1++;
        *ptr2++;
    }
    *ptr1 = '\0';

    cout << "Cocatenated Stirng  :" << str1 << endl;
}