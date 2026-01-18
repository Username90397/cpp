#include <iostream>
using namespace std;

int main () {
    setlocale(LC_ALL, "Russian");
    int x, y, z, c;
    cin >> x;
    cin >> y;
    cin >> z;
    if (x > z) {
        int tmp = x;
        x = y;
        y = tmp;
    }
    if (y > z) {
        int tmr = y;
        y = z;
        z = tmr;
    }
    if (x > y) {
        int tmp = x;
        x = y;
        y = tmp;
    }
    cout << x << y << z;
    return 0;
}
