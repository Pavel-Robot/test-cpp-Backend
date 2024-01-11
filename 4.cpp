/*
Написать метод/функцию, который/которая на вход принимает целое число, а на выходе возвращает то, является ли число простым (не имеет делителей кроме 1 и самого себя).
*/

#include <iostream>
#include <Windows.h>
using namespace std;

bool Eratosfen(int n) {

    int counter = 0;
    bool ans = true;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) counter++;
        if (counter > 0) { ans = false; break; }
    }

    return ans;
}

int main(int argc, char* argv[]) {

    //Для русского языка
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << Eratosfen(2) << endl; //1
    cout << Eratosfen(3) << endl; //1
    cout << Eratosfen(4) << endl; //0
    cout << Eratosfen(90) << endl; //0
    cout << Eratosfen(97) << endl; //1

    return 0;
}