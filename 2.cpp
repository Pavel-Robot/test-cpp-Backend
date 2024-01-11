/*
Написать метод/функцию, который/которая на вход принимает число (float), а на выходе получает число, округленное до пятерок.
Пример:
27 => 25, 27.8 => 30, 41.7 => 40.
*/

#include <iostream>
#include <Windows.h>
using namespace std;

int RoundFive(float numberOne) {
    
    int numberTwo = numberOne; //Отбрасываем дробную часть
    float ost = numberOne - numberTwo;; // остаток
    float endNumb = numberTwo % 10 + ost; //последнее число целого плюс остаток
    float ans = 0.;

    //cout <<"Входное число:" << numberOne << endl;
    //cout <<"С отброшенной дробной частью: " << numberTwo << endl;
    //cout <<"Остаток числа:" << ost << endl; 
    //cout << "Последнее число целого плюс остаток:" << endNumb << endl;

    if (0 <= endNumb && endNumb < 2.5) ans = -endNumb;
    else if (2.5 <= endNumb && endNumb < 5) ans = 5 - endNumb;
    else if (5 <= endNumb && endNumb < 7.5) ans = 5 - endNumb;
    else if (7.5 <= endNumb && endNumb <= 10) ans = 10 - endNumb;

    //cout << ans << endl;
    //cout << numberOne + ans;

    return numberOne + ans;
}

int main(int argc, char* argv[]) {

    //Для русского языка
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << RoundFive(27) << endl; //25

    cout << RoundFive(27.8) << endl; //30

    cout << RoundFive(41.7) << endl; //40

    cout << RoundFive(30) << endl; //30

    cout << RoundFive(31) << endl; //30

    cout << RoundFive(35) << endl; //35

    cout << RoundFive(355.4) << endl; //355

    cout << RoundFive(357.8) << endl; //360

    cout << RoundFive(357.865) << endl; //360

    return 0;
}