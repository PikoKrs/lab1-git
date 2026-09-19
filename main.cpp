// Лабораторная работа № 1. Вариант 98. Инфляция.
// Выполнил: Кривов Д., группа ПИ-53.
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// ===== Расчётные функции варианта =====

// Будущая цена товара: цена*(1+инф/100)^n
double futurePrice(double price, double inf, int n) {
    return price * pow(1 + inf / 100.0, n);
}

// Покупательная способность: сумма/(1+инф/100)^n
double purchasingPower(double sum, double inf, int n) {
    return sum / pow(1 + inf / 100.0, n);
}

// ===== Главная функция: меню =====
int main() {
    int choice;
    double price, inf, sum;
    int n;

    do {
        cout << "\n--- Программа расчётов. Вариант 98 ---\n";
        cout << "1. Будущая цена товара\n";
        cout << "2. Покупательная способность\n";
        cout << "0. Выход\n";
        cout << "Выберите пункт: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Введите текущую цену (руб.), инфляцию (% в год) и срок (лет): ";
                cin >> price >> inf >> n;
                cout << "Будущая цена = " << fixed << setprecision(2)
                     << futurePrice(price, inf, n) << " руб.\n";
                break;
            case 2:
                cout << "Введите сумму (руб.), инфляцию (% в год) и срок (лет): ";
                cin >> sum >> inf >> n;
                cout << "Покупательная способность = " << fixed << setprecision(2)
                     << purchasingPower(sum, inf, n) << " руб.\n";
                break;
            case 0:
                cout << "Работа завершена.\n";
                break;
            default:
                cout << "Такого пункта нет.\n";
        }
    } while (choice != 0);

    return 0;
}
