#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin;
    fin.open("file2.txt");

    cout << (char)fin.get();
    cout << "\n"<<fin.tellg();
    cout << "\n"<<(char)fin.get();
    cout << "\n"<<fin.tellg();
    fin.close();
}