#include <iostream>
using namespace std;

int main () {
    setlocale(LC_ALL, "Russian");
    int a = 5;
    for (int b = 0; b<5; ++b) {
        cout << a << endl;
        a=a*10+5;
    }
    return 0;
}
