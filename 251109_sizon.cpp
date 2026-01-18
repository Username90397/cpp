#include <iostream>
using namespace std;

int main () {
    setlocale(LC_ALL, "Russian");
   int mounth;
   cin >> mounth;
   switch (mounth) {
   case 3:
   case 4:
   case 5:
   cout << "vesna";
    break;
   
    case 6:
    case 7:
    case 8:
    cout << "leto";
    
    break;
    
    
    case 9:
    case 10:
    case 11:
    cout << "osen";
    
    break;
    
    case 12:
    case 1:
    case 2:
    cout << "zima";
    
    break;

    default:
    cout << "ti idiot";
   } 
   return 0;
}
