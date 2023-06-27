#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char ch;
    ifstream in;
    in.open("file2.txt");
    
    
        ch = in.get();
        while (!in.eof())
        {
            cout << ch;
            ch = in.get();
        }
    in.close();
}

// #include <iostream>
// #include <fstream>
// using namespace std;

// int main()
// {

//     char ch;
//     ifstream in;

//     in.open("text.txt");

//     ch = in.get();
//     while (!in.eof())
//     {
//         cout << ch;
//         ch = in.get();
//     }
//     in.close();
// }
