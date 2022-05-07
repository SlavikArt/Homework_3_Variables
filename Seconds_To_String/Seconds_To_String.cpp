#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "rus");

	int T; // Время

	int hours;
	int min;
	int sec;

	cout << "Введите время в секундах: ";
	cin >> T;

	hours = T / 3600;
	min = (T - hours * 3600) / 60;
	sec = T - (hours * 3600 + min * 60);

	cout << "Переведенное время: " << hours << " часов " << min << " минут " << sec << " секунд\n";
}