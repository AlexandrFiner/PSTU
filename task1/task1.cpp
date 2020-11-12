// task1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

const float EXCHANGE_RATE_USD = 80.1f; // Курс обмена

float salaryPayments(int experience, int s) {
	float sum = float(s);

	// f в конце числа явно указывает на float (иначе считаем double)

	if (experience < 3)
		sum *= 0.5f;
	else if (experience < 5)
		sum *= 0.6f;
	else if (experience < 8)
		sum *= 0.8f;

	return float(sum);
}

float usdToRub(float sum) {
	sum /= EXCHANGE_RATE_USD;
	return sum;
}

int main()
{
	setlocale(LC_ALL, "Russian");

	int z = 0; // Зарпалата в рублях
	int s = 0; // Стаж работы
    cout << "Введите стаж работы:" << endl;
	cin >> s;

	cout << "Введите зарплату:" << endl;
	cin >> z;
	
	float sumRub; // Выплата в рублях
	float sumUsd; // Выплата в Usd
	
	sumRub = salaryPayments(s, z);
	sumUsd = usdToRub(sumRub);

	cout << endl << endl << "Вам будет выплачено:" << endl << sumRub << " руб." << endl << sumUsd << " $" << endl;

	return 0;
}