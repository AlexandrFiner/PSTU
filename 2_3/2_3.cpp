#include <iostream>

using namespace std;

int main()
{
    int n; // Элементов
    int s; // Сумма
    int p; // Очередное число
    cout << "Введите N (сколько будет чисел в последовательности)" << endl;
    cin >> n;

    s = 0;

    for(int i = 1; i <= n; i++) {
        p = 1;
        for(int j = i; j <= i*2; j++) {
            p *= j;
        }
        s += p;
    }

    cout << "S = " << s << endl;

    return 0;
}