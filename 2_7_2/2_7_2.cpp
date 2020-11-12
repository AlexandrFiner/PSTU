#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Введите N" << endl;
    cin >> n;

    string s;

    for(int i = 0; i < n; i++) {
        s.append(n, '*');     // Добавили звездочку
        cout << s << endl;            // Вывели, что получилось
        s.clear();                    // Почистили
    }

    return 0;
}