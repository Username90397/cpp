#include <iostream>
using namespace std;

int main () {
    setlocale(LC_ALL, "Russian");
    int a[ ] =  {2, 4, 6};
    int count = sizeof(a)/sizeof(int);
    cout << "count: " << count << endl;
    int IM = 0;
    for (int i=0; i<count; ++i) {
        if (a[i]%2 && a[i]>a[IM] || a[IM]%2==0) {
            IM=i;
        } 
    }
    if (IM%2) {
        cout << "Max: " << a[IM];
    } else {
        cout << "Max: No";
    } 
    return 0;
}
