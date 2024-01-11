/*
Написать метод/функцию, который/которая на вход принимает число (int), а на выходе выдает слово “компьютер” в падеже, соответствующем указанному количеству. Например, «25 компьютеров», «41 компьютер», «1048 компьютеров».
*/


#include <iostream>
#include<string>  
#include <Windows.h>
using namespace std;

string Declination(int numberOne) {

    int Num = numberOne % 10;
    string Str = "None";


    //Много условий хм //if (Num == 0 || (Num >= 5 && Num <= 9)) Str = "ов"; 
    if (Num == 1) Str = " компьютер";
    else if (Num >= 2 && Num <= 4) Str = " компьютерa";
    else Str = " компьютеров";
    
    return to_string(numberOne) + Str;

}

int main(int argc, char* argv[]) {

    //Для русского языка
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << Declination(25) << endl;
    cout << Declination(41) << endl;
    cout << Declination(1048) << endl;
    cout << Declination(10) << endl;
    cout << Declination(0) << endl;
    cout << Declination(2) << endl;

    return 0;
}