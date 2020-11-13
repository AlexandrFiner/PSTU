#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;

    cout << "Введите N (из скольки звездочек состоит квадрат)" << endl;
    cin >> n;

    int x; // сторона
    x = log(n)/log(2);

    /*
     * Я не нашел (или не пытался) как указать основание log, поэтому воспользовался математикой.
     * Если делим два натуральных логарифма, то получим ln(a)/ln(b) == log b(a)
     */


    if(x < 1) {
        /*
         * Сторона не может быть меньше 1, поэтому просто завершаем программу
         */

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