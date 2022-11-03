#include <iostream>
using namespace std;

void hi(string nama, int age); // di declare dulu biar bisa dipake
// wajib di atas

int main()
{
    hi("anime", 16); // panggil dulu


    return 0;
}

void hi(string nama, int age)// < parameter
{
    cout << "Gweh " << nama << " umur " << age << endl;
}; // tidak akan return/terlihat
// reuse code :o
