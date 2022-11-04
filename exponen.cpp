#include <iostream>
using namespace std;

 int pow(int base, int nmr){
    int res = 1;
    for(int i = 0; i < nmr; i++){
        res = res * base;
    }
    return res;
 }

int main()
{

    cout << pow(10, 2);

    return 0;
}

// pangkat/kuadrat
