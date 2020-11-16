#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;

    cout << "Введите N (из скольки звездочек состоит квадрат)" << endl;
    cin >> n;

    int x; // сторона
    x = sqrt(n);

    if(x*x != n) {
        cout << "Программа завершилась с ошибкой:" << endl;
        cout << "-: Невозможно найти сторону" << endl;
        return 1;
    }

    string s;

    /*
     * Основной принцип описан в 2_4
     */

    for(int i = 0; i < x; i++) {
        s.append(x, '*');           // Добавили звездочку
        cout << s << endl;            // Вывели, что получилось
        s.clear();                    // Почистили
    }

    return 0;
}