#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    HANDLE hConsole;
    COORD pos = {30, 5};
    int h = 0, hs = 0, z = 0;
    cin >> z;
    for (h = 1; h < z; ++h)
    {
        hs = h / 8 + 1;
        for (int j = 0; j < hs; ++j)
        {
            pos.Y = 30 - h - hs;
            hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(hConsole, 2 << 4 | 4);
            for (int y = 0; y < h; ++y, ++pos.Y, --pos.X)
            {
                SetConsoleCursorPosition(hConsole, pos);
                for (int x = 0; x < y * 2 + 1; ++x)
                {
                    cout << "*";
                }
                cout << endl;
            }
            pos.X += h;
            for (int q = 0; q < hs; q++, ++pos.Y)
            {
                pos.X -= h;
                SetConsoleCursorPosition(hConsole, pos);
                SetConsoleTextAttribute(hConsole, 0 << 4 | 0);
                for (int f = 0; f < 2 * h + 1; ++f) {
                    cout << " ";
                }
                pos.X += h;
                SetConsoleCursorPosition(hConsole, pos);
                SetConsoleTextAttribute(hConsole, 5 << 4 | 5);
                cout << "#";
            }
        }
        Sleep(300);
    }
    COORD lamps[500];
    int c = 0;
    --h;
    for (int e = 0; e < 15; ++e) {
        int k = rand()%h;
        lamps[c].Y= k + 30 -h - hs;
        lamps[c].X= rand()%(2*k+1) - k + pos.X;
        ++c;
    }
    for (int o = 2; o<120; o+=3) {
        lamps[c].X=o;
        lamps[c].Y=1;
        ++c;
    }
    for (int p = 2; p<30; p+=2) {
        lamps[c].X=0;
        lamps[c].Y=p;
        ++c;
    }
    for (int m = 2; m<30; m+=2) {
        lamps[c].X=119;
        lamps[c].Y=m;
        ++c;
    }
    char cobors[4]={1, 4, 6, 5};
    int cn = 0;
    while (!_kbhit()) {
        for (int v=0; v<c; ++v) {
            SetConsoleCursorPosition(hConsole, lamps[v]);
            SetConsoleTextAttribute(hConsole, cobors[cn] << 4);
            cn=(cn+1)%4;
            cout << " ";
        } 
        Sleep(700);
    }
    getch();
    return 0;
}
