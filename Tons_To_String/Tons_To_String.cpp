#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "rus");

    float mass;
    int tonn;
    int kg;
    int gr;

    cout << "Введите массу в тоннах (дробное число): ";
    cin >> mass;

    tonn = mass;
    kg = mass * 1000 - (float)tonn * 1000;
    gr = (mass * 1000 - (float)(tonn * 1000 + kg)) * 1000;
    cout << mass << " т. это: " << tonn << " т. " << kg << " кг." << gr << " гр.\n";
}