#include <iostream>
using namespace std;

int main () {
    double a, b; 
    char z;
    cin >> a;
    cin >> z;
    cin >> b;
    double s = a + b;
    double r = a - b;
    double p = a * b;
    double d = a / b;
    int c = a;
    int e = b;
    int pr = c % e;
    if (z == '+') {
        cout << "a + b =" << a << "+" << b << "=" << s << endl;
    } else if (z == '-') {
        cout << "a - b =" << a << "-" << b << "=" << r << endl;
    } else if (z == '*') {
        cout << "a * b =" << a << "*" << b << "=" << p << endl;
    } else if (z == '/') {
        cout << "a / b =" << a << "/" << b << "=" << d << endl;
    } else if (z == '%') {
        cout << "c % e =" << c << "%" << e << "=" << pr << endl;
    } else {
        cout << "pishi normalno!";
    }
    return 0;
}
