#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main()
{
    string str = "Hellow\n i am nikhil";

    ofstream out;
    out.open("nik.txt");

    out << str;
   


    out.close();
}