# include<iostream>
# include<fstream>

using namespace std;
int main()
{
    char ch;
    ifstream in ("DEMO");
   
    in.seekg(8,ios::cur);
    in.read(&ch,sizeof(ch));
    cout<<"\nchar = "<<ch<<endl;
    in.seekg(9,ios::cur);
    in.read(&ch,sizeof(ch));
    cout<<"\nchar = "<<ch<<endl;
    cout<<"\nPOsotion = "<<in.tellg();
    



}