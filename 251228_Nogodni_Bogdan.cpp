#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

int main () {
    setlocale(LC_ALL, "Russian");
    HANDLE hConcole;
    hConcole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConcole, 15 << 4 | 0);
    cout << "abc" << endl;
    for (int y = 0; y<16; ++y) {
        for (int x=0; x<16; ++x) {
            SetConsoleTextAttribute(hConcole, y << 4 | x);
            cout << "*";
        }
        cout << endl;
    }
    getch();
    return 0;
}
