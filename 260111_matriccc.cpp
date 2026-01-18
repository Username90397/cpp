#include <iostream>
#include <windows.h>
using namespace std;

int main(HANDLE hConcole)
{
    setlocale(LC_ALL, "Russian");
    hConcole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos = {50, 10}; // pos.X
    SetConsoleCursorPosition(hConcole, pos);
    CONSOLE_SCREEN_BUFFER_INFOEX info;
    info.cbSize = sizeof(CONSOLE_SCREEN_BUFFER_INFOEX);
    GetConsoleScreenBufferInfoEx(hConcole, &info);
    for (int EEE = 0; EEE < 16; ++EEE)
    {
        info.ColorTable[EEE] = RGB(0, EEE * 10, 0);
    }
    SetConsoleScreenBufferInfoEx(hConcole, &info);
    for (int EEE = 0; EEE < 16; ++EEE)
    {
        SetConsoleTextAttribute(hConcole, 0 << 4 | EEE);
        // cout << "*";
    }
    int l;
    const int size = 80;
    COORD Lines[size];
    int ten[size];
    for (int p = 0; p<size; ++p) {
        Lines[p].X=rand()%100+5;
        Lines[p].Y=rand()%100-10;
        ten[p]=rand()%15+5;
    }
    while (true) {
        for (int k=0; k < size; ++k) {
            l = ten[k];
            Lines[k].Y++;
            pos=Lines[k];
            // for (int i=33; i<65; ++i) {
                for (int q = 0; q < l; ++q, pos.Y--)
                {
                    if (pos.Y > 0 && pos.Y < 30)
                    {
                        SetConsoleCursorPosition(hConcole, pos);
                        SetConsoleTextAttribute(hConcole, 15 - 15 * q / l);
                        if (q < l - 1)
                        {
                            cout << (char)(rand() % 32 + 33) << "  ";
                        }
                        else
                {
                    cout << "  ";
                }
            }
        }
        // }
        if (pos.Y>30+l) {
            Lines[k].Y=-10;
            Lines[k].X=rand()%110+5;
        }
    }
        Sleep(51);
    }
    system("pause");
    return 0;
}
