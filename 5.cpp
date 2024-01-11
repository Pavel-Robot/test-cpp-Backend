/*
Написать метод, который в консоль выводит таблицу умножения. На вход метод получает число, до которого выводит таблицу умножения. В консоли должна появиться таблица. Например, если на вход пришло число 5, то получим: 
Важно: 
- В последней строке между числами ровно по одному пробелу должно выводиться. 
- В каждом столбце числа должны быть выровнены по правому краю.
*/


#include <iostream>
#include <string> 
#include <list>
#include <Windows.h>
#include <iomanip>
using namespace std;


int  multiTable(int n) {

    int buf;

    //создаем двумерный дин массив
    int** Arr = new int* [n+1];
    for (int i = 0; i <= n; i++) {
        Arr[i] = new int[n+1];
    }

    //заполняем его
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            
            if (i == 0) Arr[i][j] = j;
            else if (j == 0) Arr[i][j] = i;
            else {
                Arr[i][j] = i * j;
            }



            //код для отображения
            if(j == 0) buf = n ; //узнаем самое большое возможное число в последней строке j столбца
            else buf = n * j;

            string A = to_string(buf); //переводим в стринг, чтобы узнать длину числа, вообще можно через while было сделать..
            int B = A.length();

            if(j == 0) cout << right << setw(B) << Arr[i][j];
            else cout << right << setw(B+1) << Arr[i][j];
            if(j == n) cout << endl;
            
        }
    }


    return 0;

}

int main(int argc, char* argv[]) {

    //Для русского языка
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n = 20;

    multiTable(n);

    return 0;
}