#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    char ch;
    ifstream in;

    in.open("test.txt");

    ch = in.get();
    while (!in.eof())
    {
        cout << ch;
        ch = in.get();
    }
    in.close();
}