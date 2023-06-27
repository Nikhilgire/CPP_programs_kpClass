#include <iostream>
using namespace std;

class Rect
{
    int length, breath;

public:
    void getdata()
    {
        cout << "Enter the value of length and breath :" << endl;
        cin >> length >> breath;
    }
    friend void calArea(Rect r)
    {
        int a = r.length * r.breath;

        cout << "\nArea of the rectangle : " << a << " Sq-meter";
    }
};
int main()
{
    Rect r1;
    r1.getdata();
    calArea(r1);
}
