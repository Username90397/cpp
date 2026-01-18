#include <iostream>
using namespace std;

int main () {
    setlocale(LC_ALL, "Russian");
    int mounthCount;
    cout << "skolko mesacev v godu?" << endl; 
    cin >> mounthCount;
    switch (mounthCount) {
        case 12:
        cout << "Da, eto verno" << endl;
        
        break;

        default: 
            cout << "ti idiot?" << endl;
            cin >> mounthCount;
            switch (mounthCount) {
        case 12:
        cout << "Da, eto verno" << endl;
        
        default: 
            cout << "ti idiot!" << endl;
            }
            
            break;

        }
        return 0;
    }

