#include<iostream>
using namespace std;

int main()
{
    int arr[10];
    int i,n,pos,val;

    cout<<" Enter  size of the array :";
    cin>>n;

    cout<<"Enter element of the array : ";
    
    for (i = 0;i<=n;i++)
    {
      cin>>*(arr+i);
    }
    
    cout<<"Enter the element ypu want to delete : ";
    cin>>pos;

    for(i = n-1;i<=pos-1;i--)
    {
        *(arr+i+1) = *(arr + i);
    }
    
    n--;
    

    for (i = 0 ;i<n ;i++)
    {
        cout<<*(arr+1)<<" "<<"\t";
    }
  return 0;

}