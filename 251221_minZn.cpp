#include <iostream>
using namespace std;

int main () {
    setlocale(LC_ALL, "Russian");
    int a[5] = {300, 500, 190, 200, 800};
    for (int i=0; i<5; ++i) {
    int b=a[0];
        if (a[i]<b) {
            b=a[i];
        }
    }
    cout << b << endl;
    return 0;
}
