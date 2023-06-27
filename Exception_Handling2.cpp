#include <iostream>
using namespace std;

int main()
{
     float  n1, n2;
     float r;
    cout << " enter value of n1 nad n2 : " << endl;
    cin >> n1 >> n2;

    try
    {

        if (n2 == 0)
            throw n2;
        else
        {
            r = n1 / n2;
            cout << "Result = " << r << endl;
        }
    }
    catch (float n2)
    {
        cout << "Denominaor should be alwayas greater than zero ";
    }
}
