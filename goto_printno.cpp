# include<iostream>
using namespace std;
int main()
{

  int i=2;
  cout<<" All even numbers between 1 to 50 : "<<"\t";
  block:
  cout<<i<<" ";
  i+=2;
  if(i<=50)
  goto block;

  return 0;

}