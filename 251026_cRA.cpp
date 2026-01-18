#include <iostream>
using namespace std;

int main () {
    setlocale(LC_ALL, "Russian");
    int countRedApple = 75;
    countRedApple *= 10;
    cout << countRedApple << endl;
    countRedApple -= 1000;
    cout << countRedApple << endl;
    countRedApple += 1;
    cout << countRedApple << endl;
    countRedApple %= 20;
    cout << countRedApple;  
    return 0;
}
