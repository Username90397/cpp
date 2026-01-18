#include <iostream>
using namespace std;

int main () {
    setlocale(LC_ALL, "Russian");
    int b, c;
    cout << "chislo: ";
    cin >> b;
    cout << "povtor: ";
    cin >> c;
    for (int a=0; a<c; ++a) {
        cout << b << " ";
    } 
    return 0;
}
