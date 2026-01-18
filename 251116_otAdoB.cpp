#include <iostream>
using namespace std;

int main () {
    setlocale(LC_ALL, "Russian");
    double a, b;
    cout << "First namber: ";
    cin >> a;
    cout << "Second namber: ";
    cin >> b;
    for (long long int n=a; n<b; ++n) {
        cout << n << " ";
    }
    return 0;
}
