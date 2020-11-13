#include <iostream>

using namespace std;

/*
 * Принцип работы расписан в задаче 2_4
 */

int main() {
    int n;

    cout << "Введите N" << endl;
    cin >> n;

    string s;

    for(int i = 0; i < n; i++) {
        s.append(n-i-1, ' ');       // Добавили пробелы
        s.append(i+1, '*');           // Добавили звездочку
        cout << s << endl;            // Вывели, что получилось
        s.clear();                    // Почистили
    }

    return 0;
}