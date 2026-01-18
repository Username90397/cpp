#include <iostream>
using namespace std;

int main () {
    setlocale(LC_ALL, "Russian");
    cout.precision(20);
    cout << "double: " << endl;
    double a = 0.1, b = 0.7, c = a+b, v = c*10; 
    int j = v;
    cout << "0.1: " << a << endl;
    cout << "0.7: " << b << endl;
    cout << "0.8: " << c << endl;
    cout << "8: " << v << endl;
    cout << "j8: " << j << endl;
    cout << "float: " << endl;
    float o = 0.1, d = 0.7, g = o+d, n = g*10; 
    int p = n;
    cout << "0.1: " << o << endl;
    cout << "0.7: " << d << endl;
    cout << "0.8: " << g << endl;
    cout << "8: " << n << endl;
    cout << "j8: " << p << endl;
    return 0;
}
