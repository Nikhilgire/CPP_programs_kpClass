#include<iostream>
using namespace std;

int main()

{
    int arr[100];
    int n , i , pos , val ;

    cout<<"Enter size of the arrray : ";
    cin>>n;
    cout<<"Enter element of the array :";
    for (i = 0 ; i<n ; i++ )
    {
        cin>>arr[i];

    }

    cout<<" Enter position of insertion of the  element : ";
    cin>>pos;
    cout<<"Enter value  to be inserted :";
    cin>>val;

// element shifting
    for ( i = n-1; i>=pos -1 ; i--)
    {
        arr [i + 1] = arr  [i];
    }
    
    //value insertion to position
    arr[pos -1]=val;
    //new array size update
    n++;
  
  // new array element 
    cout<<"New array element :"<<endl;
    for(i =0 ;i<n;i++)
    {
        cout<<arr[i]<<" "<<"\t";
    }

    return 0;



}