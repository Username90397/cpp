#include <iostream>
using namespace std;

int main () {
    setlocale(LC_ALL, "Russian");
    int year = 2025;
    year = year + 1;
    cout << year << endl;
    year += 1;
    cout << year << endl;
    year++;
    cout << year << endl;
    ++year;
    cout << ++year << endl;
    cout << year++ << endl;
    cout << year;
    return 0;
}
