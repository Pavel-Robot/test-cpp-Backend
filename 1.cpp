/*
Написать метод/функцию, который/которая на вход принимает массив городов. В качестве результата возвращает строку, где города разделены запятыми, а в конце стоит точка. 
Пример:
«Москва, Санкт-Петербург, Воронеж.» 
*/


#include <iostream>
#include <Windows.h>
using namespace std;


string City(string* arr, int len) {

    string buf = "";

    for (int i = 0; i < len; i++) {
        if (i < len - 1) buf = buf + arr[i] + ", ";
        else buf+=arr[i] + '.';
    }

    cout << buf;

    return buf;

}

int main(int argc, char* argv[]) {

    //Для русского языка
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string arr[3] = {"Москва","Санкт-Петербург","Воронеж"};

    int len = sizeof(arr) / sizeof(arr[0]);

    City(arr, len);

    return 0;
}