#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "Введите два числа, которые будут делится" << endl;
    cin >> a >> b;

    if(b == 0) {
        cout << "Невозможно деление на нуль" << endl;
        return 1;
    }

    // float(a) - для того, чтобы получить по итогу значение float, а не int

    float res;
    res = float(a)/b;

    cout << res << endl;
    return 0;
}