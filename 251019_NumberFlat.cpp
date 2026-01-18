#include <iostream>
using namespace std;

int main () {
    setlocale(LC_ALL, "Russian");
    int n = 72;
    int e = ((n-1)/4+1)/9;//0
    int p = (n-1)/36 + 1; // 1
    cout << "kv N" << n << " " << p << "p" << e << "i"; 
    return 0;
}
