#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Введите N" << endl;
    cin >> n;

    if(n == 1) {
        cout << "*" << endl;
        return  0;
    }

    string s;

    // Вывод первой строки
    s.append(n, '*');
    cout << s << endl;
    s.clear();

    for(int i = 0; i < n-2; i++) {
        cout << "*";

        s.append(n-2, ' ');     // Добавили звездочку
        cout << s;                      // Вывели, что получилось
        s.clear();                    // Почистили

        cout << "*" << endl;
    }

    // Вывод последней строки
    s.append(n, '*');
    cout << s << endl;

    return 0;
}