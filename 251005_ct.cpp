#include <iostream>
using namespace std;

int main () {
    char a = 'x';
    char b = 'z';
    char c = 'o';
    cin >> a;
    cin >> b;
    cout << "    " << a << endl;
    cout << "   " << b << b << b << endl;
    cout << "  " << a << c << a << c << a << endl;
    cout << " " << b << c << b << c << b << c << b << endl;
    cout << "" << c << a << c << a << c << a << c << a << c << endl;
    cout << "    #";
    return 0;
}