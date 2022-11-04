#include <iostream>
using namespace std;

class Buku {
    public:
        string judul;
        string auth;
        int halaman;

        Buku(string xJudul, string xAuth, int xHalaman){

            judul = xJudul;
            auth = xAuth;
            halaman = xHalaman;

        }

        bool fav(){
        if(halaman >= 200){
                return true;
            }
            return false;
        }

};

int main()
{
    Buku buku1("IPS", "Tidak diketahui", 257);

    cout << buku1.fav() << endl;

    return 0;
}
