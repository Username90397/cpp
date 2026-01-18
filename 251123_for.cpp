#include <iostream>
using namespace std;

int main () {
    setlocale(LC_ALL, "Russian");
    int n = 100; 
    for (int i = 1; i < n; ++i) {
        cout << i << " ";
    }
    cout << endl;
    for (int i = 13; i < n; i+=13) {
        cout << i << " ";
    }
    return 0;
}
