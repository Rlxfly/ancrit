#include <iostream>
using namespace std;

int main()
{
    int a = 16;
    int *pA = &a;
    double kkm = 3.3;
    double *pKkm = &kkm;
    string me = "Re7Pntx";
    string *pMe = &me;

   // cout << pA; // lokasi var a
   //cout << *pMe; // mengeluarkan isinya dari lokasi
    cout << *&me;

    return 0;
}
 // gtw
