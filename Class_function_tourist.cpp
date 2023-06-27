#include <iostream>
using namespace std;

class tourist
{
private:
    int ID;
    char name[12];
    float amt;

public:
    void getdata()
    {
        cout << "Enter tourist ID : " << endl;
        cin >> ID;
        cout << "Enter tourist Name : " << endl;
        cin >> name;
        cout << "Enter tourist initial amount : " << endl;
        cin >> amt;
        cout << "Enter tourist updates initial amount : " << endl;
        cin >> amt;
    }

    // void modify(tourist obj1)
    // {
                                                     /*  Tourist ID :120

                                                         Tourist Name  :nikhil

                                                         Tourist  amount  :150 */                                                         
 



    //     obj1.amt = amt;
    // }
    void putdata()
    {
        cout << "\n Tourist ID :"         << ID   << endl;
        cout << "\n Tourist Name  :"      << name << endl;
        cout << "\n Tourist  amount  :"   << amt  << endl;
    }
};
int main()
{
    tourist t1, t2, t3;
    t1.getdata();
    // t2.modify(t1);
    t1.putdata();
}