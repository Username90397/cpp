#include <iostream>
using namespace std;

int main () {
    setlocale(LC_ALL, "Russian");
    bool a = true;
    bool b = false;
    int n = 10;
    cout << "a = " << a << endl;
    cout << "n < 50: " << (n<50) << endl;  
    cout << "n > 50: " << (n>50);  
    return 0;
}
