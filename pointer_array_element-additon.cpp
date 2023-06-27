#include <iostream>
using namespace std;

int main()
{
    int a[5], *ptr, i, sum = 0;
    ptr = a;
    cout << " Enter element of array :";

    for (i = 0; i < 5; i++)
    {
        cin >> *ptr;
        ptr++;
    }
    ptr = a;
    cout << "Element of the array : " << endl;

    for (i = 0; i < 5; i++)
    {
        cout << *ptr << endl;
        ptr++;
    }
    ptr = a;

    for (i = 0; i < 5; i++)
    {
        sum = sum + (*ptr);
        ptr++;
    }
    cout << " Sum of array element = " << sum << endl;
    return 0;
}