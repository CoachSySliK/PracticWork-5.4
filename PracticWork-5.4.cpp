#include <iostream>

using namespace std;

int main()
{
    int banknote[6] = { 100,200,500,1000,2000,5000 };
    int cash;
    int cashMax = 150000;
    int b1, b2, b3, b4, b5, b6; 

    b1 = b2 = b3 = b4 = b5 = b6 = 0;

    cout << "Банкомат\n";

    cash:
    cout << "Введите сумму не более " << cashMax << " рублей: ";
    cin >> cash;

    if (cash < 100 || cash > cashMax || cash % 100 != 0) {
        cout << "Не корректная сумма ввода!\n";
        goto cash;
    }

    while (cash > 0) {
        if (cash >= banknote[5]) {
            cash -= banknote[5];
            b6++;
        }
        else if (cash >= banknote[4]) {
            cash -= banknote[4];
            b5++;
        }
        else if (cash >= banknote[3]) {
            cash -= banknote[3];
            b4++;
        }
        else if (cash >= banknote[2]) {
            cash -= banknote[2];
            b3++;
        }
        else if (cash >= banknote[1]) {
            cash -= banknote[1];
            b2++;
        }
        else if (cash >= banknote[0]) {
            cash -= banknote[0];
            b1++;
        }
    }

    if (b6 > 0) cout << "Выдано " << b6 << " купюр по 5000\n";
    if (b5 > 0) cout << "Выдано " << b5 << " купюр по 2000\n";
    if (b4 > 0) cout << "Выдано " << b4 << " купюр по 1000\n";
    if (b3 > 0) cout << "Выдано " << b3 << " купюр по 500\n";
    if (b2 > 0) cout << "Выдано " << b2 << " купюр по 200\n";
    if (b1 > 0) cout << "Выдано " << b1 << " купюр по 100\n";

    return 0;
}
