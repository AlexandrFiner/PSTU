#include <iostream>

using namespace std;

int main()
{
    int max;
    int a, b, c;
    cout << "Введите 3-и числа, среди которых ищем максимум" << endl;
    cin >> a >> b >> c;

    if(a > b)
        max = a;
    else
        max = b;

    if(c > max)
        max = c;

    cout << "Максимальное число: " << max << endl;
    return  0;
}