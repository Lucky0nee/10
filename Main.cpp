#include <iostream>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "ukr");
    cout << "Введiть число:";
    int мiсяць;  
    cin >> мiсяць;
    cout << "\n";

    if (мiсяць < 1 || мiсяць > 12)
        cout << "Error: \n";

    switch (мiсяць) {
    case 1:
        cout << "1 - Сiчень\n";
        break;
    case 2:
        cout << "2 - Лютий\n";
        break;
    case 3:
        cout << "3 - Березень\n";
        break;
    case 4:
        cout << "4 - Квiтень\n";
        break;
    case 5:
        cout << "5 - Травень\n";
        break;
    case 6:
        cout << "6 - Червень\n";
        break;
    case 7:
        cout << "7 - Липень\n";
        break;
    case 8:
        cout << "8 - Серпень\n";
        break;
    case 9:
        cout << "9 - Вересень\n";
        break;
    case 10:
        cout << "10 - Жовтень\n";
        break;
    case 11:
        cout << "11 - Листопад\n";
        break;
    case 12:
        cout << "12 - Грудень\n";
        break;
    default:
        cout << "Вказане число не можна покласти у вiдповiдий мiсяць\n";
        break;
    }
    cout << "\n";
    return 0;
}
