#include <iostream>
using namespace std;

int main () {
    setlocale(LC_ALL, "Russian");
    int a=2, b=10;
    if (a>b) {
        cout << a;
    } else {
        cout << b;
    }
    return 0;
}
