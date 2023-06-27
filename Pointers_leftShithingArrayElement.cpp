#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int n, i, pos, val;

    cout << "Enter the siz of the array :";
    cin >> n;
    cout << "Enter elements of the array : ";

    for ( i = 1; i <= n; i++)
    {
        cin >> *(arr + i);
    }

    cout << "Enter the position of isertion of th element : ";
    cin >> pos;

    cout << "Enter value of insertion element : ";
    cin >> val;

    //    shifting of the element to the left

    for ( i = 1; i <= pos - 1; i++){
        *(arr + i - 1) = *(arr + i);
        }

    //   inserting th new value

    *(arr  + pos - 1) = val;
    n ++ ;
    // new array elment
    cout << " New ellement of the array : " << endl;
    for ( i = 0; i < n; i++)
    {
        cout << *(arr + i) << " "
             << "\t";
    }
    return 0;
}