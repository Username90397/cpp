#include <iostream>
using namespace std;

int main () {
    setlocale(LC_ALL, "Russian");
    for (int j=1; j<4; ++j) { 
        for (int i = 0; i < 5; ++i) {
            cout << 5;
        } 
        cout << endl;
    }
    for (int j=0; j<20; ++j) { 
        cout << 5;
        if (j % 5 == 4) {
            cout << endl;
        }
    }
    cout << endl << endl << endl << endl << endl << endl;
    for (int a = 41; a<81; ++a) {
        for (int b = a; b<a+10; b+=10) {
            cout << b << " ";
        }
    }
    return 0;
}
