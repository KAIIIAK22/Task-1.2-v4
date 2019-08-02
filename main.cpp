#include <iostream>
using namespace std;

   int main()
   {
    unsigned  int a ;
    cout<<"Vasha zarplata($): ";
    cin >>a;
    cout <<(a>1000?(a>1000000?"Ti millioner!":"Horosho"):"Rabotai bolshe")<<"...no ti molodec";
    return 0;
   }
