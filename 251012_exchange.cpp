#include <iostream>
using namespace std;

int main () {
    int a = 5, b = 7, tmp;
    cout << "a: " << a << " b: " << b << endl;
    tmp = a;
    a = b;
    b = tmp; 
    cout << "a: " << a << " b: " << b << endl;
    return 0;
}
