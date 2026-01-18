#include <iostream>
using namespace std;

int main () {
    double a = 7, b = 4.2;
    double sum, razn, proiz, del;
    sum = a + b;
    razn = a - b;
    proiz = a * b;
    del = a / b;
    cout << "a + b = " << endl << a << "+" << b << "=" << sum << endl; 
    cout << "a - b = " << endl << a << "-" << b << "=" << razn << endl; 
    cout << "a * b = " << endl << a << "*" << b << "=" << proiz << endl; 
    cout << "a / b = " << endl << a << "/" << b << "=" << del; 
    return 0;
}
