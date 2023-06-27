#include <iostream>
using namespace std;
int main()
{
    int num, f = 1;
    cout << " enter no"
         << "\n";
    cin >> num;
block1:
    f = num * f;
    num = num - 1;
    if (num > 0)
        goto block1;
    cout << "factorial = " << f;
}
