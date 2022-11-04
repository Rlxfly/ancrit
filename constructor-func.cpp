#include <iostream>
using namespace std;

class MySelf {
    public:
        string me;
        string from;
        int age;

        MySelf(){
            me = "Yo ndak tau";
            from = "404";
            age = 404;
        }
        MySelf(string name, string asal, int umur){
            // bisa dikasih parameter
            me = name;
            from = asal;
            age = umur;
            // murid yang ga paham
        }// namanya constructor

};

int main()
{

    MySelf gwe("Re7", "Central Java, Indonesia", 17);
    //gwe.me = "Re7Pntx";
    //gwe.from = "Central Java, Indonesia";
    //gwe.age = 17;

    MySelf ah("Yanto bilek", "Ngawi", 21);
    //gwe.me = "Yanto Icikiwir";
    //gwe.from = "Kecamatan Ngawi";
    //gwe.age = 22;

    MySelf iyh;

    cout << gwe.me << endl;
    cout << iyh.me << endl;

    return 0;
}
