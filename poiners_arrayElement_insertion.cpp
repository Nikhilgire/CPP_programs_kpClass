#include <iostream>
using namespace std;

int main() {
    int arr[100], n, pos, val;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> *(arr + i);
    }

    cout << "Enter the position where you want to insert an element: ";
    cin >> pos;

    cout << "Enter the value you want to insert: ";
    cin >> val;

    // Shift the elements to the right from the given position
    for (int i = n - 1; i >= pos - 1; i--) {
        *(arr + i + 1) = *(arr + i);
    }

    // Insert the new element at the given position
    *(arr + pos - 1) = val;

    // Increment the size of the array
    n++;

    cout << "The new array is: ";
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;

    return 0;
}
