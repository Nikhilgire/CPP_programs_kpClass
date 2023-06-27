#include <iostream>
using namespace std;

class code
{
    int id;

public:
    code()
    {
    }
    code(int a)
    {
        id = a;
    }
    code(code &x)
    {
        id = x.id;
    }
    void display()
    {
        cout << id;
    }
};
int main()
{
    code A(100);
    code B(A);
    code C = A;
    code D = A;
    // D =A ;
    cout << "\n ID of  A :";
    A.display();
    cout << "\n ID of  B :";
    B.display();
    cout << "\n ID of  C :";
    C.display();
    cout << "\n ID of  D :";
    D.display();
}