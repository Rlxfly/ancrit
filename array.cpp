#include <iostream>

using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5}; // note: jika ada variabel yg diakhiri dengan "[]" artinya array (?)
    //      ^ batas elemen di dalam array
    arr[1] = 404; // bisa diubah
    cout << arr[1];


    return 0;
}
