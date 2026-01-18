#include <iostream>
using namespace std;

int main () {
    setlocale(LC_ALL, "Russian");
    int sum=0;
    int count=0;
    char a[100]="text 12 abc 7 * 9 = 63 end";
    cout << a << endl;
    for (int i=0; a[i]; ++i) {
        cout << a[i] << '-';
        if (a[i]>='0' && a[i]<='9') {
            ++count; sum += a[i]-'0';
        }
    }
    cout << endl;
    cout << "count: " << count << endl;
    cout << "sum: " << sum << endl;
    return 0;
}
