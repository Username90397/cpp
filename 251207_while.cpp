#include <iostream>
using namespace std;

int main () {
    setlocale(LC_ALL, "Russian");
    int n = 200;
    while (n%17!=0) {
        ++n;
    }
    cout << n;
    return 0;
}
