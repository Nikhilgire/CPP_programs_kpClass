#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter Text : \n";
    cin.get(ch);
    while (ch != '\n')
    {
        cout.put(ch);
        cin.get(ch);
    }
    
}
