#include <iostream>
using namespace std;

int main () {
    setlocale(LC_ALL, "Russian");
    int a;
    cout << "number: ";
    cin >> a;
    if (a<10) {
        for (int i = 1; i<11; ++i) {
            cout << i << " * " << a << " = " << (i*a<10 ? " " : "") << i * a << endl; 
        }
    } else {
        cout << "Ne hochu!";
    }
    return 0;
}
