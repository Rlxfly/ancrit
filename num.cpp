#include <iostream>
#include <cmath>

using namespace std;

int main(){

    cout << pow(5, 2); // pow = pangkat(2, 3 = 2*2*2) bad math moment:v
    cout << sqrt(100); // sqrt = akar
    cout << round(4.7); // round = bulatkan bilangan, lebih dari 5 akan dibulatkan ke atas, kurang dari .5 akan ke bawah(tidak berubah ke angka berikutnya)
    cout << ceil(4.1); // ceil = bulatkan ke atas, berapapun komanya(?)
    cout << floor(4.6); // floor = bulatkan ke bawah
    cout << fmax(4, 5); // fmax = mencari bilangan mana yang terbesar dari 2 bilangan yang diberikan
    cout << fmin(4, 6); // fmin = mencari nilai terkecil dari ke 2 nilai yang diberikan

    return 0;
}

// more: c++ math function
