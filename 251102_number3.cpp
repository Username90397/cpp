#include <iostream>
using namespace std;

int main () {
    setlocale(LC_ALL, "Russian");
    int n = 3; //10..99
    if (n/10 == 3 || n%10 == 3) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}
