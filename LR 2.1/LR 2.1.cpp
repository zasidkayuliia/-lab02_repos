#include <iostream>
#include <cmath>

using namespace std;
double ctg(double x) {
	return 1 / tan(x);// формула для обчислення ctg
}

int main()
{
	double Pi = 4 * atan(1.); // число пі
	double alpha; // вхідний параметр
	//double z1; // результат обчислення 1-го виразу
	double z2; // результат обчислення 2-го виразу

	cout << "alpha = "; cin >> alpha; // Введення значення альфа

	//z1 = sin(Pi / 2 + 3 * alpha) / (1 - sin(3 * alpha - Pi));
	z2 = ctg(5 * Pi / 4 + 3 * alpha / 2);

	cout << endl;
	//cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;

	cin.get();
	return 0;
}
