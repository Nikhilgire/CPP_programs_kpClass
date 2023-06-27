#include <iostream>
using namespace std;

int main()
{
    int a[10], *ptr, i, n, max1 = 10, index , val;
    ptr = a;
    cout << " Enter size of array :";
    cin>>n;

    for (i = 0; i < n; i++)
    {
        cin >> n;
    }
    cout << "Enter  element of array : ";

    for (i = 0; i < n; i++)
    {
        cin >> *ptr;
        ptr++;
    }

    ptr = &a[n - 1];
    if (n - max1 - 1)
    {
        cout << " Enter index loaction and value :";
        cin >> index >> val;
    }
    for (i = n - 1; i <= index; i--)
    {
        *(ptr + 1) = *ptr;
        ptr--;

        ptr = &a[index];
        *ptr = val;
        n++;
    }
    ptr = a;
    cout << "Array element after inseertion operation : \n";
    for (i = 0; i < n; i++)
    {
        cout << *ptr << endl;
        ptr++;
    }
}
