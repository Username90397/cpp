#include <iostream>
using namespace std;

int main () {
    setlocale(LC_ALL, "Russian");
    int number, count = 0;
    cin >> number;
    int numMax = 0;
    for (int num = number ; num ; num/=10) {
        if (num%10>numMax) {    
            numMax = num % 10;
        }
    }
    cout << numMax;
    for (int num = number ; num; num/=10) {
        if (num % 10 == numMax) {
            ++count;
        }
    }
    cout << count; 
    return 0;
}
