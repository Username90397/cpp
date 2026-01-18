#include <iostream>
using namespace std;

int main () {
    setlocale(LC_ALL, "Russian");
    const int S = 10;
    int a[S], b[S], c[S];
    for (int i=0; i<S; ++i) {
        a[i] = rand()%21+10;
        b[i] = rand()%21+10;
        c[i] = a[i]+b[i];
    }
        for (int i=0; i<S; ++i) {
                cout << a[i] << "\t";
        }
        cout << endl;


        for (int i=0; i<S; ++i) {
                cout << b[i] << "\t";
        }
        cout << endl;

        for (int i=0; i<S; ++i) {
                cout << c[i] << "\t";
        }
        cout << endl;
    return 0;
}
