#include <iostream>
using namespace std;

int main () {
    setlocale(LC_ALL, "Russian");
    int b, c;
    cout << "odd chislo: ";
    cin >> b;
    for (int a=1; a<b; a+=2) {
            cout << a << " ";
     }
    return 0;
}
