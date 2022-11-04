#include <iostream>
using namespace std;

int main()
{
    int iyh[3][2] = {
                    {1, 2},
                    {3, 4},
                    {5, 6}
                    };

    //cout << iyh[0][1];
    for(int i = 0; i < 3; i++)
    {
        for(int x = 0; x < 2; x++){
            cout << iyh[i][x];
        }
        cout << endl;
    }

    return 0;
}

// COK BINGUNG!!111111111111!11111!
