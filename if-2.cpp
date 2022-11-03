#include <iostream>
using namespace std;

int mx(int num1, int num2, int num3){
    int res;

   if(num1 >= num2 && num1 >= num3){
    res = num1;
   } else if(num2 >= num1 && num2 >= num3){
   res = num2;
   } else {
    res = num3;
   }

    return res;
}

int main()
{
    cout << mx(2, 9, 11);
    return 0;
}

//bjirka
