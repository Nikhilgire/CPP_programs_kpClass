#include <iostream>
#include <string>

using namespace std;

int* fibo(int);

int main()
{
    int num,  *ptr;
    cout << "How many numbers in fibonacci series? ";
    cin >> num;

    ptr = fibo(num);

    for (int i = 0; i < num; i++)
    {
        cout << *(ptr + i) << " ";
    }

}

int* fibo(int n)
{
    int arr[50];
    arr[0] = 1;
    arr[1] = 1;
    for (int i = 2; i < n; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    return arr;
}
