#include <iostream>
using namespace std;

int main () {
    setlocale(LC_ALL, "Russian");
    int Bogdan = 0, AAA;
    for (int i=0; ; ++i) {
        cout << "a" << i << ": ";
        cin >> AAA;
        Bogdan += AAA;
        cout << "Bogdan: " << Bogdan << endl;
    }
    return 0;
}
