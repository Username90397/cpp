#include <iostream>
using namespace std;

int main () {
    setlocale(LC_ALL, "Russian");
    int year;
    cin >> year;
    int stoLet = year / 100;
    if (year%100>0) {
        ++stoLet;
    }
    cout << year << endl;
    cout << stoLet << endl;
    cout << year/100 + (year%100?1:0); 
    cout << year/100 + (int)(bool)(year/100);
    cout << (year-1)/100+1;
    return 0;
}
