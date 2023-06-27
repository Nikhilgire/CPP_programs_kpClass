#include <iostream>
using namespace std;
const float pi = 3.14;
class circle
{
private:
    float radius;
    float area;

public:
    void getdata();
    void putdata();
};

void circle::getdata()
{

    cout << " Enter radius of the circle : "
         << "\n";
    cin >> radius;
}
void circle ::putdata()
{
    area = pi * radius * radius;
    cout << "Area of the circle is : " << area;
}
int main()
{
    circle aa, bb;
    aa.getdata();
    aa.putdata();

    bb.getdata();
    bb.putdata();
}
