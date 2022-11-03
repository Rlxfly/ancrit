#include <iostream>
using namespace std;

int main()
{
    bool pintar = false;
    bool malas = true;
    if(pintar && malas){
        cout << "Pintar ga malas";
    } else if(pintar && !malas){
        // "!" = membuat var menjadi false/tidak malas
        cout << "Pintar banhet banh";
    } else if(!pintar && malas){
        cout << "Malas sekali";
    }
     else {
        cout << "Bukan siaoa siaoa";
    }

    return 0;
}

// sokin ngabs
