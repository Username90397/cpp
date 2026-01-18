#include <iostream>
using namespace std;

int main () {
    setlocale(LC_ALL, "Russian");
    int num = 1, ans;
    ans = ++num + 1 + ++num * 2;
    cout << ans << " ";
    cout << num;
    return 0;
}
