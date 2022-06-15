#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int a, b;
    cout << "Введите два числа: \n";
    cin >> a >> b;
    cout << "Первое число делится без остатка на: \n";
    for (int i = 1; i <= a; i++) {
        if (a % i == 0) {
            cout << i << endl;
        }

    }
    cout << "Второе число делится без остатка на: \n";
    for (int i = 1; i <= b; i++) {
        if (b % i == 0) {
            cout << i << endl;
        }
    }
}