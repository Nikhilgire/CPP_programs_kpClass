#include <iostream>
using namespace std;
int count = 0;
class demo
{
public:
    demo()
    {
        count++;
        cout << "The no of object created : " << count << endl;
    }
    ~demo()
    {

        count--;
        cout << "The no of object destroyed : " << count << endl;
    }
};
int main()
{
    {
        demo aa;
    }
    demo a;

    demo aaa;
}