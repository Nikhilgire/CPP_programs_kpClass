#include <iostream>
using namespace std;
int main()
{
    char str[20], *ptr;
    int word = 0, number = 0, space = 0;
    ptr = str;
    cout << "Enter the string ";
    gets(str);

    while (*ptr != '\0')
    {
        if (*ptr >= 'a' && *ptr <= 'z' || *ptr >= 'A' && *ptr <= 'Z')
        {
            word++;
            ptr++;
        }

        else if (*ptr >= '0' && *ptr <= '10')
        {
            number++;
            ptr++;
        }
        else if (*ptr == ' ')
        {
            space++;
            ptr++;
        }
    }
    cout << " \nThe number of character   in th string = " << word;
    cout << " \nThe number of integer  in th string = " << number;
    cout << " \nThe number of spaces  in th string = " << space;
}