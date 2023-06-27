# include<iostream>
using namespace std;
int main()
{

try {
   throw 13.3f;           // double value 
}
catch ( float  exception){       // float catch block
    cout<<"Caught "<<exception;
}

catch(...){
    cout<<"default exception";   // catch all block 
}
return 0;
 }            