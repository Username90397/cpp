#include <iostream>
using namespace std;

int main () {
    setlocale(LC_ALL, "Russian");
    int c = 0;
    double e = 2;
    for (int n=2; n<10; ++n) {
        long long int f=1;
        for (int i = 1; i<n+1; ++i, ++c) {
            f *= i;
        }
        // cout << n << "! = " << f << endl;
        e += 1.0/f;
    }
    cout << "exp = " << e << endl;
    cout << "count: " << c << endl;
    c = 0;
    e = 2;
    int f = 1;
    for (int n=2; n<2000000000; ++n) {
            f *= n;
        ++c;
        // cout << n << "! = " << f << endl;
        e += 1.0/f;
    }
    cout << "exp = " << e << endl;
    cout << "count: " << c << endl;
    system("pause");
    return 0;
}
