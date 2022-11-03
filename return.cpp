#include <iostream>
using namespace std;

double cube(double num)
// ^ var     ^ parameter
{
    double res = num * num * num;
    return res;
}

int main()
{
    double ans = cube(2.0); // return balik ke var cube, agak lemao
    // biar keren ajh klo pake var lagi
    // awokawoakwaok
    cout << ans;


    return 0;
}
