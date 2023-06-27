#include <iostream>
using namespace std;

int main()
{
    char str[20], *ptr;
    int len = 0;
    cout << " Enter the string :";
    cin >> str;

    ptr = str;

    while ((*ptr) != '\0')
    {
        len++;
        ptr++;
    }

    cout << "Length of the string = " << len;
}