#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int countUnits = n%10;
    int countDec = n/10%10;
    int countHun = n/100;
    int res = countHun * countDec * countUnits;
    cout << res;
    return 0;
}
