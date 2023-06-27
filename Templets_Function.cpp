#include <iostream>
using namespace std;

template <class X>
X big(X a, X b)
{
    if (a > b)
    return a;
    
    else
    return b;
}
int main()
{
    cout <<"greater number : "<< big(54, 5412);
    cout << endl;

    cout <<"greater number : "<< big(512.451, 54.54);
    cout << endl;

    cout <<"greater number : "<< big('A', 'B');
}