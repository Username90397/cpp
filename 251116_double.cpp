#include <iostream>
using namespace std;

int main () {
    setlocale(LC_ALL, "Russian");
    cout.precision(20); 
    for (double a = 1.1; a<=10.3000000001; a+=0.4) {
        cout << a << " ";
     }
    return 0;
}
