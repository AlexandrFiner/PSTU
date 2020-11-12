#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;

    cout << "Введите N (из скольки звездочек состоит квадрат)" << endl;
    cin >> n;

    int x; // сторона
    x = log(n)/log(2);

    if(x < 1) {
        cout << "Программа завершилась с ошибкой:" << endl;
        cout << "-: Невозможно найти сторону" << endl;
        return 1;
    }

    string s;

    for(int i = 0; i < x; i++) {
        s.append(x, '*');           // Добавили звездочку
        cout << s << endl;            // Вывели, что получилось
        s.clear();                    // Почистили
    }

    return 0;
}