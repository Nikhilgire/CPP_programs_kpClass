# include<iostream>
using namespace std;

int main()
{
    int arr[10];
    int n , i , pos , val ;

    cout<<" Enter size of the arary: ";
    cin>>n;

    cout<<"Enter element of the array :";
    for(i = 1 ;i<=n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter position  of insertion of the elee=ment :";
    cin>>pos;

    cout<<"Enter value  to be inserted :";
    cin>>val;

    // Element shifting 

    for(i= 1 ;i <= pos -1 ; i++)
    {
        arr[i-1] = arr[i];
    }
    // value  insertion 

    arr[pos-1] = val;
    n++;

   // updated element 
   for(i = 0 ; i<n ;i++)
   {
    cout<<arr[i]<<" "<<"\t";
   }

  return 0;

}