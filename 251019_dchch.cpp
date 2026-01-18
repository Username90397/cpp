#include <iostream>
using namespace std;

int main () {
    setlocale(LC_ALL, "Russian");
    double n = 374.1525;
    int past;
    past = n; //374
    cout  << "B числе" << n << "\tдробная часть равна " << n-past << endl;
    cout  << "B числе" << n << "\tдробная часть равна " << n-(double)(int)n << endl;
    return 0;
}
