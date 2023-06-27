# include<iostream>
using namespace std;
int main()
{

try {
   throw  29;
}
catch ( int exception){
    cout<<"Caught "<<exception;
}
catch ( float exception){
    cout<<"Caught float "<<exception;
}

catch(...){
    cout<<"default exception";
}
return 0;
}
