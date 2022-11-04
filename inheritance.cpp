#include <iostream>
using namespace std;

class Chef {
    public:
        void makeSoup(){
            cout << "The chef makes soup" << endl;
        }
        void makeSalad(){
            cout << "The chef makes salad" << endl;
        }
        void makeSteak(){
            cout << "The chef makes steak" << endl;
        }


};

class BestChef : public Chef{
//             ^ pewarisan kelaz
// wut de hell
// ooomaagaaa

    public:
        void makePasta(){
        cout << "The chef makes pasta" << endl;
        }
        void makeSteak(){
            cout << "The chef makes beef steak" << endl;
        }
};

int main()
{
    Chef chef;
    chef.makeSoup();
    //chef.makePasta(); ga bisa karena cuma ada di kelas BestChef

    BestChef pro;
    pro.makeSteak();
    pro.makePasta();
    pro.makeSteak();

    return 0;
}

/*
 kesimpulan:

 pewarisan kelas bisa dilakukan di c++ dengan "class dua : public class satu"
 jika sudah diwarisi kelas tetap bisa mengubah beberapa function, tetapi di kelas yang mewarisi tidak akan bisa dapat func tersebut



 UWWWWOOOOOOOOOGHHHHHHHHHHHHHHHHHH KELAR JUGA COKKKKKKKKKKKKKKKKKKKKKKKKKKKK
*/
