#include <iostream>
using namespace std;

int main () {
    setlocale(LC_ALL, "Russian");
    double a, b;
    char z;
    int c = a, d = b;
    cin >> a >> z >> b;
    switch (z) {
        case '+':
        cout << a + b;
        break;
        case '-':
        cout << a - b;
        break;
        case '/':
        if (b) {
            cout << a / b;
        } else {
            cout << "idiot";
        }
        break;
        case '*':
        cout << a * b;
        break;
        case '%':
        if (d) {
            cout << c % d;
        } else {
            cout << "idiot";
        }
        break;
    } 
    return 0;
}
