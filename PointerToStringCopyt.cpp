#include <iostream>
using namespace std;

int main()
{
    char str1[10];
    char str2[10] = "";

    char *ptr1, *ptr2;

    cout << " Enter first string :" << endl;
    cin >> str1;

    ptr1 = str1;
    ptr2 = str2;

    while ((*ptr1) != '\0')
    {
        *ptr2 = *(ptr1);

        *ptr1++;
        *ptr2++;
    }

    cout << "before copy :" << str1 << endl;
    cout << "after copy :" << str2 << endl;
}