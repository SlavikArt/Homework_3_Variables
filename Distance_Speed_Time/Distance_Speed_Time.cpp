﻿#include <iostream>

using namespace std;

int main()
{
	/* Человек пробежал S километров до бомбоубежища со скоростью V метров в секунду
	(расстояние и скорость вводятся с клавиатуры).
	Определить, сколько времени он был в пути(часов, минут, секунд)? */

	setlocale(0, "rus");

	float S; // Расстояние
	float V; // Скорость
	int T; // Время

	int hours;
	int min;
	int sec;

	cout << "Введите расстояние в км (S): ";
	cin >> S;

	cout << "Введите скорость в м/с (V): ";
	cin >> V;

	S *= 1000;
	T = S / V; // с.


	hours = T / 3600;
	min = (T - hours*3600) / 60;
	sec = T - (hours * 3600 + min * 60);
	
	cout << "Человек был в пути: " << hours << " часов " << min << " минут " << sec << " секунд\n";
}