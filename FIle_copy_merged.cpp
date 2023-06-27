# include<iostream>
# include<fstream>
using namespace std;

int main()
{
char str1[25],str2[25],fname1[24],fname2[24];
int n1,n2,i;

cout<<"Enter first file name :";
cin>>fname1;
ofstream ofs1 (fname1);
cout<<"Enter number of line for file 1 : ";
cin>>n1;

for(i=0;i<=n1;i++)
{
    fgets(str1,sizeof(str1),stdin);
    ofs1;
}

cout<<"Enter Second file name :";
cin>>fname2;
ofstream ofs2 (fname2);
cout<<"Enter number of line for file 2 : ";
cin>>n2;
for(i=0;i<=n2;i++)
{
    fgets(str2,sizeof(str2),stdin);
    ofs2<<str2;
}
cout<<"\nfile 2 is merged with file 1 \n";

}