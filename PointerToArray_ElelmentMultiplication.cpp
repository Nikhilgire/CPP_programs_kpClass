#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    int *ptr, i, mul= 1;

    ptr = arr;

    cout << "Enter the 10 elements of the array : " << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> *ptr;
        ptr++;
    }

    ptr = arr;

    cout << "User entered this elements :" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << *ptr<<"\t";
        ptr++;
    }

    ptr = arr;

    for (int i = 0; i < 10; i++)
    {
        mul = mul * *ptr;
        ptr++;
    }

    cout << "\nMultiplication of elements that user emtered is : " << mul;
}