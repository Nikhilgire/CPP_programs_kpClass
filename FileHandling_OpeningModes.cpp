# include<iostream>
# include<fstream>
using namespace std;

int main()
{
    fstream fout ;
    fout.open("file3.txt",ios::out);
    string str  = " hellow nikhikl";

    fout<<str;

    fout.close();
}
