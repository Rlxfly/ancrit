#include <iostream>
using namespace std;

int main()
{
    int pass = 777;
    int tebakan;
    int jtebakan = 0;
    int limit = 5;
    bool ded = false;

    while(pass != tebakan && !ded){
        //      ^ tidak sama dengan
        if(jtebakan < limit){
        cout << "Enter the password: ";
        cin >> tebakan;
        jtebakan++;
        } else {
        ded = true;
        }
    }
    if(ded){
        cout << "Yaha salah";
    } else {
        cout << "Login...";
    }

    return 0;
}
