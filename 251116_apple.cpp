#include <iostream>
using namespace std;

int main () {
    setlocale(LC_ALL, "Russian");
    cout << "Сколько мне надо съесть яблок:" << endl;
    int a;
    cin >> a;
    if (a>21) {
       cout << "Я не съем столько яблок!";
    } else if (a % 100>4 && a % 100 < 21) {
        cout << "Я съем " << a << " яблок";
    } else {
        switch (a % 10) {
            case 1:
            cout << "Я съем " << a << " яблоко";
            break;
            case 2: case 3: case 4:
            cout << "Я съем " << a << " яблока";
            break;
            default:
            cout << "Я съем " << a << " яблок";
            break;
        }
    }
    return 0;
}
