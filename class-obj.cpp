#include <iostream>
using namespace std;

class MySelf {
    public:
        string me;
        string from;
        int age;

};

int main()
{

    MySelf gwe;
    gwe.me = "Re7Pntx";
    gwe.from = "Central Java, Indonesia";
    gwe.age = 17;

    MySelf ah;
    gwe.me = "Yanto Icikiwir";
    gwe.from = "Kecamatan Ngawi";
    gwe.age = 22;

    cout << gwe.me << endl;
    cout << gwe.age << endl;
    cout << gwe.from << endl;
    cout << endl;
    cout << ah.me << endl;
    cout << ah.age << endl;
    cout << ah.from << endl;

    return 0;
}

// gabisa jika langsung diprint ke duanya
// keren juga sih
