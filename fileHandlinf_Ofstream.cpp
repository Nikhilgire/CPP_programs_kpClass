# include<iostream>
# include<fstream>
using namespace std;

int main()
{
    char str[100];
    ofstream  ofs("file.text");
    cout<<"Enter a text";
    cin.getline(str,sizeof(str));
    ofs<<str;
    ofs.close();
    

}