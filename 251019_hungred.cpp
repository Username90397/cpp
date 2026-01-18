#include <iostream>
using namespace std;

int main () {
    setlocale(LC_ALL, "Russian");
    double n = 374.1525;
    cout << "Ucx числа " << n << "\n Округ. число:" << (double)(int)(n * 100)/100.0; 
    return 0;
}
