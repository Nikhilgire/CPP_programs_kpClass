#include <iostream>
using namespace std;

int main()
{
    int a[5], *ptr, i;
    ptr = a;   // or ptr = a[0];
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
    return 0;
}