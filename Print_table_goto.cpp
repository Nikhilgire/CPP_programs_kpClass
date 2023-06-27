# include<iostream>
using namespace std;

int main()
{
   int n,i=1;
   cout<<" ENter no to print its table : "<<"\t";
   cin>>n;
   label:
   cout<<n<<" x "<<i<<" = "<<n*i<<"\n";
   i++;
   if(i<=10)
   goto label;


}