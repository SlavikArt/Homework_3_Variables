#include <iostream>

using namespace std;

int main()
{
	/* Пользователь вводит с клавиатуры время начала и
	время завершения телефонного разговора (часы, минуты и секунды).
	Посчитать стоимость разговора, если стоимость минуты составляет 15 копеек,
	с учётом посекундной тарификации. */

	setlocale(0, "rus");
	// begin
	int beg_hours;
	int beg_min;
	int beg_sec;
	// end
	int end_hours;
	int end_min;
	int end_sec;
	
	float for_pay;
	int hrn;
	int kop;

	cout << "Введите время начала телефонного разговора:\n";
	cout << "Часы: ";
	cin >> beg_hours;
	cout << "Минуты: ";
	cin >> beg_min;
	cout << "Секунды: ";
	cin >> beg_sec;

	cout << "Введите время конца телефонного разговора:\n";
	cout << "Часы: ";
	cin >> end_hours;
	cout << "Минуты: ";
	cin >> end_min;
	cout << "Секунды: ";
	cin >> end_sec;

	for_pay = ((end_hours * 3600 + end_min * 60 + end_sec) -
		(beg_hours * 3600 + beg_min * 60 + beg_sec)) * 0.25;
	hrn = (int)for_pay / 100;
	kop = (int)for_pay - (float)hrn * 100;
	cout << "Вам нужно заплатить " << hrn << " грн. " << kop << " к.\n";
}