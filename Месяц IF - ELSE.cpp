﻿#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    int month;
    cout << "Введите номер месяца: ";
    cin >> month;
    if (month == 1) {
        cout << "Январь.";
    }
    else if (month == 2) {
        cout << "Февраль.";
    }
    else if (month == 3) {
        cout << "Март.";
    }
    else if (month == 4) {
        cout << "Апрель.";
    }
    else  if (month == 5) {
        cout << "Май.";
    }
    else if (month == 6) {
        cout << "Июнь.";
    }
    else if (month == 7) {
        cout << "Июль.";
    }
    else if (month == 8) {
        cout << "Август.";
    }
    else if (month == 9) {
        cout << "Сентябрь.";
    }
    else if (month == 10) {
        cout << "Октябрь.";
    }
    else if (month == 11) {
        cout << "Ноябрь.";
    }
    else if (month == 12) {
        cout << "Декабрь.";
    }
    else {
        cout << "Нет такого месяца.";
    }
    int _;
    cin >> _;
    return 0;
}