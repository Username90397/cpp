#include <iostream>
using namespace std;

int main () {
    setlocale(LC_ALL, "Russian");
    int n = 10, d = 7;
    cout << "Остаток: " << n % d << endl;
    int intPart = n / d;
    int total = intPart * d;
     int modulo = n - total;
     cout << "Остаток: " << modulo;
    return 0;
}
