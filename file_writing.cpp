# include<iostream>
#include<fstream>

using namespace std;

int main()
{
    string str = "CPP programming , C Programming , Java Programming";

  ofstream out("file.text");
 
 out<<str;


  out.close();
 
}
