#include <iostream>
using namespace std;

int main () {
    setlocale(LC_ALL, "Russian");
    double a, b;
    char z;
    char e = '>', f = '<';
    cin >> a;
    cout << "or" << endl;
    cin >> b;
    cin >> z;
    if (z == e) {
        cout << "bigger number: ";
        if (a>b) {
            cout << a;
        }  else {
            cout << b;
        }
    }
    if (z == f) {
        cout << "las number: ";  
        if (a<b) {
            cout << a;
        }  else {
            cout << b;
        }
    }
    return 0;
}