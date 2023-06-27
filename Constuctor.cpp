#include <iostream>
#include <string.h>
using namespace std;

class test
{
    int id;
    char name[25];

public:
    test()
    {
        id = 983;
        // strcpy(name, "\nnikhil sheshrao gire");
        strcpy(name, "\nNikhil sheshrao gire");
    }
    void display()
    {
        cout << id << " " << name;
    }
};
int main()
{
    test t1;
    t1.display();
}
