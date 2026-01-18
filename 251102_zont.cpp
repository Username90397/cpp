#include <iostream>
using namespace std;

int main () {
    setlocale(LC_ALL, "Russian");
    bool isNeedOpen;
    bool isRain = true;
    bool isOnSt = true;
    bool isHU = true;
    bool isOpen = false;
    isNeedOpen = isRain && isOnSt && isHU && !isOpen;
    if (isNeedOpen) {
        cout << "Open";
        isOpen = true;
    } 
    return 0;
}
